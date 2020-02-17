#include <functional>
#include <ostream>

class StaticParticle {
    protected:
        double _x, _y;
        double _mass;
    public:
        StaticParticle(double x, double y, double mass) :
            _x {x},
            _y {y},
            _mass {mass} {};
        StaticParticle(StaticParticle&) = default;
        StaticParticle(StaticParticle&&) = default;
        ~StaticParticle() = default;
        double x() const { return _x; }
        double y() const { return _y; }
        double mass() const {return _mass; }
        virtual double energy() const;
        double dist(const StaticParticle& other) const;
        friend std::ostream& operator<<(std::ostream& out,
                                        const StaticParticle& p);
};
