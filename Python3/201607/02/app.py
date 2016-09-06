from flask import Flask, request, render_template

app = Flask(__name__)

@app.route('/', methods=['GET', 'POST'])
def home():
  return render_template('index.html')

@app.route('/Panorama/index.html', methods=['GET', 'POST'])
def signin_form():
  return render_template('./Panorama/index.html')

@app.route('/StockQuery/index.html', methods=['GET', 'POST'])
def f3():
  return render_template('./StockQuery/index.html')

@app.route('/Resume/qqmail.pdf', methods=['GET', 'POST'])
def signin():
  return render_template('./Resume/qqmail.pdf')

if __name__ == '__main__':
    app.run()