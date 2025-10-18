class SimpleReflexVaccumAgent:
    def __init__(self):
        pass

    def perceive(self,location,status):
        """location: 'A' or 'B', status: 'Dirty' or 'clean'"""
        action = None
        if status!='Dirty' and status!='clean':
            print("enter status from dirty or clean only")
            return
        elif location!='A' and location!='B':
            print("location entered does not exist")
            return
        elif status == "Dirty":
            action = "suck"
        elif location == "A":
            action = "Move right"
        else:
            action = "Move left"
        return action
    

agent = SimpleReflexVaccumAgent()
print(agent.perceive("A", "Dirty"))
print(agent.perceive("B", "Dirty"))
print(agent.perceive("A", "Clean"))
print(agent.perceive("C", "suck"))