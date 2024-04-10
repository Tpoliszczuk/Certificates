class Category:
    def __init__(self, what):
        self.title = what
        self.ledger = []
        self.balance = 0
        self.spent = 0

    def get_balance(self):
        return self.balance

    def check_funds(self, amt):
        if self.balance >= amt:
            return True
        else:
            return False

    def deposit(self, amt, note=""):
        self.balance += amt
        self.ledger.append({"amount": amt, "description": note})
        return True

    def withdraw(self, amt, note=""):
        if self.get_balance() >= amt:
            self.balance = self.balance - amt
            self.ledger.append({"amount": -amt, "description": note})
            self.spent += amt
            return True

        else:
            return False

    def transfer(self, amount, instance):

        if self.check_funds(amount):
            description_transfer = f"Transfer ${amount} from {self.title} to {instance.title}."
            self.withdraw(amount, f"Transfer to {instance.title}")
            instance.deposit(amount, f"Transfer from {self.title}")
            return True
        else:
            return False

    def __str__(self):
        receipe = self.title.center(30, '*') + "\n"

        items = ""
        total = 0
        for item in self.ledger:

            receipe += f"{item['description'][0:23]:23}" + f"{item['amount']:>7.2f}" + "\n"
            total += item['amount']

        receipe += (f"Total: {self.balance}")

        return receipe


def create_spend_chart(categories):
    spent_amounts = []
    for category in categories:
        spent = 0
        for item in category.ledger:
            if item["amount"] < 0:
                spent += abs(item["amount"])
        spent_amounts.append(round(spent, 2))


    total = round(sum(spent_amounts), 2)
    spent_percentage = list(map(lambda amount: int((((amount / total) * 10) // 1) * 10), spent_amounts))


    header = "Percentage spent by category\n"

    chart = ""
    for value in reversed(range(0, 101, 10)):
        chart += str(value).rjust(3) + '|'
        for percent in spent_percentage:
            if percent >= value:
                chart += " o "
            else:
                chart += "   "
        chart += " \n"

    footer = "    " + "-" * ((3 * len(categories)) + 1) + "\n"
    titles = list(map(lambda category: category.title, categories))
    max_length = max(map(lambda title: len(title), titles))
    titles = list(map(lambda title: title.ljust(max_length), titles))
    for x in zip(*titles):
        footer += "    " + "".join(map(lambda s: s.center(3), x)) + " \n"

    return (header + chart + footer).rstrip("\n")


