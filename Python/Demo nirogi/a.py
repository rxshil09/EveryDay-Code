import requests

def get_product_links_serpapi(query):
    params = {
        "engine": "google",
        "q": f"{query} site:apollopharmacy.in",
        "api_key": "c503d3982928b9e362f9422fc06976db7db142872cdf72a94b4f83eb608ca5e0",
        "num": 10  # number of results
    }

    response = requests.get("https://serpapi.com/search", params=params)
    results = response.json()

    links = []
    for result in results.get("organic_results", []):
        link = result.get("link")
        if "apollopharmacy.in" in link:
            links.append(link)

    return links

# Example
links = get_product_links_serpapi("dolo 650mg")
for link in links:
    print(link)
