get '/styles/:name.css' do
  content_type :css, :charset => 'utf-8'
  sass :"stylesheets/#{params[:name]}"
end

get '/favicon.ico' do
end

get '/' do
  haml :index
end
