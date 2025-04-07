#ifndef IPROBLEM_H
#define IPROBLEM_H

class IProblem {
  public:
    // `virtual` ensures that the correct subclass destrcutor runs when you
    // delete through a pointer to `IProblem`
    virtual ~IProblem() = default;

    // virtual allows dynamic dispatch whereas pure (= 0) ensures that the
    // function must be implemented by derived classes.
    virtual void run() = 0;
};

#endif //IPROBLEM_H
