class Solution:
    def interpret(self, command: str) -> str:
        final_str = ""
        for i in range(len(command)):
            if(command[i] == "G"):
                final_str += "G"
            if(command[i : i+2] == "()"):
                final_str += "o"
            if(command[i : i+4] == "(al)"):
                final_str += "al"
        return final_str