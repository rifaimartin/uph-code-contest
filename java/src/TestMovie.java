public class TestMovie {
    public static void main(String[] args) {
        Movie movie = new Movie();

        movie.setName("Avatar air blender");
        movie.setRating(8);

        Movie movie2 = new Movie();

        movie2.setName("Ultraman Gaya Katak");
        movie2.setRating(10);

        Movie movie3 = new Movie();

        movie3.setName("Naruto & Kurama");
        movie3.setRating(8);


        System.out.println(movie);
        System.out.println(movie2);
        System.out.println(movie3);

    }
}
