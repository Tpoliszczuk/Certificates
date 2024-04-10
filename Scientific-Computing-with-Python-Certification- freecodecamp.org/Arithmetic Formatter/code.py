def arithmetic_arranger(problems, show_answers=False):
    if len(problems) > 5:
        return "Error: Too many problems."

    resoult = {'top': '', 'bottom': '', 'line': '', 'result': ''}

    for problem in problems:
        num1, operator, num2 = problem.split()

        if len(num1) > 4 or len(num2) > 4:
            return "Error: Numbers cannot be more than four digits."

        if not num1.isdigit() or not num2.isdigit():
            return "Error: Numbers must only contain digits."

        if operator not in ('+', '-'):
            return "Error: Operator must be '+' or '-'."

        width = max(len(num1), len(num2)) + 2

        resoult['top'] += num1.rjust(width) + '    '
        resoult['bottom'] += operator + num2.rjust(width - 1) + '    '
        resoult['line'] += '-' * width + '    '

        if show_answers:
            result = str(eval(problem)).rjust(width)
            resoult['result'] += result + '    '

    if show_answers:
        resoult = resoult['top'][:-4] + '\n' + resoult['bottom'][:-4] + '\n' + \
                            resoult['line'][:-4] + '\n' + resoult['result'][:-4]
    else:
        resoult = resoult['top'][:-4] + '\n' + resoult['bottom'][:-4] + '\n' + \
                            resoult['line'][:-4]

    return resoult


print(f'\n{arithmetic_arranger(["32 - 698", "1 - 3801", "45 + 43", "123 + 49", "988 + 40"], True)}')
