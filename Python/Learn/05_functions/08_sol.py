def print_kwargs(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")
        
print_kwargs(name = "shaktimaan", power = "Lazer")
print_kwargs(name = "shaktimaan")
print_kwargs(power = "Lazer")
print_kwargs(name = "shaktimaan", power = "Lazer", enemy = "Dr. Jackaal")