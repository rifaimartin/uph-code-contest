package assigment;
public class BabySittingJob {
    private int jobNum;
    private int empCode;
    private int numChildren;
    private int year;

    public BabySittingJob(int jobNum, int empCode, int numChildren, int year) {
        this.jobNum = jobNum;
        this.empCode = empCode;
        this.numChildren = numChildren;
        this.year = year;
    }

    public int getJobNum() {
        return jobNum;
    }

    public void setJobNum(int jobNum) {
        this.jobNum = jobNum;
    }

    public int getEmpCode() {
        return empCode;
    }

    public void setEmpCode(int empCode) {
        this.empCode = empCode;
    }

    public int getNumChildren() {
        return numChildren;
    }

    public void setNumChildren(int numChildren) {
        this.numChildren = numChildren;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

}
