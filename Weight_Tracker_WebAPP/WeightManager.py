weight_table = []


def get_weight_titlecase():
    weight_titlecase = []
    for weight in weight_table:
        weight_titlecase.append(weight_table[weight].title())
    return weight_titlecase

def print_weight_titlecase():
    weight_titlecase = get_weight_titlecase()
    print(weight_titlecase)


def add_weight(weight_input, waist_input, thigh_input):
    weight_list = {"weight": weight_input, "waist": waist_input, "thigh": thigh_input}
    weight_table.append(weight_list)


def save_file(weight_list):
    try:
        f = open("roxy.txt", "a")
        f.write(weight_list)
        f.close()
    except Exception:
        print("Could not save file")


def read_file():
    try:
        f = open("roxy.txt", "r")
        for weight_list in f.read():
            add_weight(weight_list)
        f.close()
    except Exception:
        print("Could not read file")

read_file()
print_weight_titlecase()

weight_input = input("Enter Weight: ")
waist_input = input("Enter Waist: ")
thigh_input = input("Enter Thigh: ")
add_weight(weight_input, waist_input, thigh_input)
save_file(weight_input + "\n")
save_file(waist_input + "\n")
save_file(thigh_input + "\n")

