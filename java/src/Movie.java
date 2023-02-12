public class Movie {
    private String name;
    private Integer rating;

    //constructor
    public Movie(String name, Integer rating) {
        this.name = name;
        this.rating = rating;
    }

    public Movie() {

    }

    // getter setter
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Integer getRating() {
        return rating;
    }

    public void setRating(Integer rating) {
        this.rating = rating;
    }

    // to string output
    @Override
    public String toString() {
        return "Movie{" +
                "name='" + name + '\'' +
                ", rating='" + rating + '\'' +
                '}';
    }
}
