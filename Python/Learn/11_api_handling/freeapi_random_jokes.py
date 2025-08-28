import requests

def fetch_random_joke_freeapi():
    url = "https://api.freeapi.app/api/v1/public/randomjokes?limit=10&query=science&inc=categories%2Cid%2Ccontent&page=1"
    
    response = requests.get(url)
    object1 = response.json()
    
    if object1["success"] and "data" in object1:
        joke1 = object1["data"]["data"][0]["content"]
        joke2 = object1["data"]["data"][1]["content"]
        joke3 = object1["data"]["data"][2]["content"]
        joke4 = object1["data"]["data"][3]["content"]
        
        return joke1, joke2, joke3, joke4
    else:
        raise Exception("Failed to fetch user data")
    
def main():
    try:
        joke1, joke2, joke3, joke4 = fetch_random_joke_freeapi()
        
        print(f"Joke_1: {joke1} \nJoke_2: {joke2} \nJoke_3: {joke3} \nJoke_4: {joke4} \n")
    except Exception as e:
        print(str(e))

if __name__ == "__main__":
    main()