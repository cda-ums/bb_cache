template<class K, class V, class Compare=std::less(K)> 
	class CachePolicyUMap {
		typedef K key_type;
		typedef V value_type;
		typedef std::unordered_map<key_type, value_type, Compare>::iterator iterator
		public:
			iterator insert(const key_type& key, const value_type& value);
			value_type get(const key_type& key);
			iterator erase(const key_type& key);
			iterator begin();
			const_iterator begin() const;
			iterator end();
			const_iterator end() const;
		private:
			std::unordered_map<key_type, value_type, Compare> cacheContainer_;

	};
template<class K, class V, class Compare=std::less(K)>
	class CachePolicyMap {
	typedef K key_type;
	typedef V value_type;
	typedef std::map<key_type, value_type, Compare>::iterator iterator
	public:
		iterator insert(const key_type& key, const value_type& value);
		value_type get(const key_type& key);
		iterator erase(const key_type& key);
		iterator begin();
		const_iterator begin() const;
		iterator end();
		const_iterator end() const;
	private:
		std::map<key_type, value_type, Compare> cacheContainer_;

	};
