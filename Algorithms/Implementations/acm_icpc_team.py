def max_knowledge_team(knowledge):
    number_of_teammates = len(knowledge)
    number_of_topics = len(knowledge[0])
    total_topics = 0
    groups = 0
    
    for member in xrange(number_of_teammates):
        for teammate in xrange(member+1, number_of_teammates):
            current_combination = 0
            for topic in xrange(number_of_topics):
                expertise = (knowledge[member][topic] + knowledge[teammate][topic])
                if expertise > 0:
                    current_combination += 1

            if current_combination > total_topics:
                total_topics = current_combination
                groups = 1
            elif current_combination == total_topics:
                groups +=1
            else:
                pass
    return [total_topics, groups]


if __name__ == "__main__":
    members, topics = map(int, raw_input().split())
    knowledge = {}
    for member in xrange(members):
        knowledge[member] = map(int, list(raw_input()))

    total_topics, groups = max_knowledge_team(knowledge)
    print total_topics
    print groups
