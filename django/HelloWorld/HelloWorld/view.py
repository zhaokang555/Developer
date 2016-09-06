# -*- coding: utf-8 -*-

#from django.http import HttpResponse
from django.shortcuts import render

def hello(request):
    context          = {}
    context['hello'] = 'hello form zk '
    return render(request, 'hello.html', context)