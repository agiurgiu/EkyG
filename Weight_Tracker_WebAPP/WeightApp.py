from flask import Flask, render_template, redirect, url_for, request

weight_table = []


class Weight:

    def __init__(self, date, weight, waist, thigh):
        self.date = date
        self.weight = weight
        self.waist = waist
        self.thigh = thigh
        weight_table.append(self)

    def __str__(self):
        return "Weight " + self.weight
        return "Waist " + self.waist
        return "Thigh " + self.thigh
        return "Date " + self.date


app = Flask(__name__)


@app.route("/", methods=["GET", "POST"])
def weight_page():
    if request.method == "POST":
        new_weight = request.form.get("weight", "")
        new_waist = request.form.get("waist", "")
        new_thigh = request.form.get("thigh", "")
        new_date = request.form.get("date", "")

        final_stats = Weight(date=new_date, weight=new_weight, waist=new_waist, thigh=new_thigh)

        return redirect(url_for("weight_page"))

    return render_template("index.html", weight_table=weight_table)


if __name__ == "__main__":
    app.run(debug=True)
