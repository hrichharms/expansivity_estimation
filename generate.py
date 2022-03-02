from random import randint


def uniform(a, b, n):
    return [str(randint(a, b)) for _ in range(n)]


if __name__ == "__main__":

    from sys import argv

    with open(argv[1], "w") as output_file:
        output_file.write("\n".join([argv[4]] + uniform(int(argv[2]), int(argv[3]), int(argv[4]))))
