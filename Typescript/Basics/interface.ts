interface Person {
    name: string;
    age: number;
    height?: number;
    hello: () => void;
}

const person : Person = {
    name : "tim",
    age: 23,
    hello: function() {
        console.log(this.name + "says hi");
    }
}

person.hello()

interface Employee{
    employeeId : number;
}

const worker: Employee = {

}

interface Manager extends Person,Employee {
 employees: Person[]
}

const manager : Manager = {

}