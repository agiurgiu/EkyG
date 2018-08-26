from flask import Flask, render_template, redirect, url_for, request


students = []

class Student:

	school_name = "Springfield Elementary"

	def __init__(self, name, student_id=332):
		self.name = name
		self.student_id = student_id
		students.append(self)

	def __str__(self):
		return "Student " + self.name

app = Flask(__name__)


@app.route("/", methods=["GET", "POST"])
def students_page():
	if request.method == "POST":
		new_student_id = request.form.get("student-id", "")
		new_student_name = request.form.get("name", "")
		new_student_last_name = request.form.get("last-name", "")

		new_student = Student(name=new_student_name, student_id=new_student_id)
		students.append(new_student)

		return redirect(url_for("students_page"))

	return render_template("../Weight_Tracker_WebAPP/index.html", students=students)


if __name__ == "__main__":
	app.run(debug=True)
