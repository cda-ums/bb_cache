namespace ums {
	template<class K, class V, class CachePolicy>
	class cache:public CachePolicy<K, V> {
	public:
		typedef K key_type;
		typedef V value_type;

		bool contains(const key_type& key);
		iterator insert(const key_type& key, const value_type& value);
		value_type get(const key_type& key);
		iterator erase(const key_type& key);
		iterator begin();
		const_iterator begin() const;
		iterator end();
		const_iterator end() const;
	};
}
