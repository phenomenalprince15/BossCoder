/*
Problem Statement : Concert Tickets

There are n concert tickets available, each with a certain price. Then, m
customers arrive, one after another.

Each customer announces the maximum price they are willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.

Input

The first input line contains integers n
 and m
: the number of tickets and the number of customers.

The next line contains n
 integers h1,h2,…,hn
: the price of each ticket.

The last line contains m
 integers t1,t2,…,tm
: the maximum price for each customer in the order they arrive.

Output

Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.

If a customer cannot get any ticket, print −1
.

Constraints
1≤n,m≤2⋅105

1≤hi,ti≤109

Example

Input:
5 3
5 3 7 8 5
4 8 3

Output:
3
8
-1

4 8 3
2 3 3 5 5 7 8

- Basically it looks like when a person comes and tell the price that he can afford,
we can start looking for that "price_number" in our available tickets.
- It's like we need to search/scan the "available tickets price" array and
eventually select the nearest/closest possible.
- when we need to find closest/nearest possbile - Think of bounds - > Binary search - > which eventually means sorting.
- we can use lower bound or upper bound. but we can only use upper bound ? why ???

{10, 20, 30, 30, 30, 40, 50}
lower_bound{30} returns position 2.
upper_bound{30} returns position 5.

Use upper bound as "we can't go beyond a certain point & return one lower value than that, 
if no lower value meaning, it's the first value return -1."


*/

#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	int n, m;
	cin >> n >> m;
	multiset<int> price_of_tickets = {};
	vector<int> b;
	while(n--){
		int x;
		cin >> x;
		price_of_tickets.insert(x);
	}
	n = price_of_tickets.size();
	
	while (m--){
		int person_ticket_price;
		cin >> person_ticket_price;
		
		auto it = price_of_tickets.upper_bound(person_ticket_price);
		//cout << "pos : " << (it - price_of_tickets.begin()) << endl;
		//cout << *it << endl;
		
		if (it == price_of_tickets.begin()){
			cout << -1 << endl;
		}else{
			it--;
			//cout << "pos : " << (it - price_of_tickets.begin()) << endl;
			cout << *it << endl;
			price_of_tickets.erase(it);
		}	
		
	}
	
	
	return 0;
}