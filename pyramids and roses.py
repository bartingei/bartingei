# this is a comment

def print_emojis():
    emoji= '@'
    rose='!'
    numbers=[1,2,3,4,5,6,7,8,9,10]
    size=len(numbers)

    for number in numbers:
        emoji_count=numbers[(size-number)]
        roses_count=numbers + 2

        print(f'{emoji + emoji_count} {rose * roses_count} {emoji * emoji_count}')

        for number in numbers:
            roses_count=numbers[(size-number)] + 2
            print(f'{emoji + number} {rose + roses_count} {emoji * emoji_count}')

            print_emojis()
            