# from django.conf.urls import patterns, include, url
# from django.contrib import admin

# urlpatterns = patterns('',
#     # Examples:
#     # url(r'^$', 'HelloWorld.views.home', name='home'),
#     # url(r'^blog/', include('blog.urls')),

#     url(r'^admin/', include(admin.site.urls)),
# )

from django.conf.urls import *
from HelloWorld.view import hello

urlpatterns = patterns("",
    ('^hello/$', hello),
)