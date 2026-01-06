class BrazoRobotico {
	private:
    		double x;
   		double y;
    		double z;
		bool sujetando;

	public:
    		BrazoRobotico(double x_inicial, double y_inicial, double z_inicial);
    		double getX() const;
    		double getY() const;
    		double getZ() const;
    		bool estaSujetando() const;			
    		void coger();
    		void soltar();
    		void mover(double nuevoX, double nuevoY, double nuevoZ);
};
