package assigment;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class PemesananTiketApp extends JFrame {
    private JLabel judulLabel, jumlahTiketLabel, jenisTiketLabel, totalHargaLabel;
    private JTextField jumlahTiketField, totalHargaField;
    private JComboBox jenisTiketComboBox;
    private JButton hitungButton;

    private final int HARGA_REGULER = 50000;
    private final int HARGA_VIP = 75000;
    private final int HARGA_PREMIUM = 100000;

    public PemesananTiketApp() {
        // Buat komponen
        judulLabel = new JLabel("Pemesanan Tiket Bioskop");
        judulLabel.setFont(new Font("Arial", Font.BOLD, 18));

        jumlahTiketLabel = new JLabel("Jumlah Tiket:");
        jumlahTiketField = new JTextField(10);

        jenisTiketLabel = new JLabel("Jenis Tiket:");
        jenisTiketComboBox = new JComboBox();
        jenisTiketComboBox.addItem("Reguler");
        jenisTiketComboBox.addItem("VIP");
        jenisTiketComboBox.addItem("Premium");

        totalHargaLabel = new JLabel("Total Harga:");
        totalHargaField = new JTextField(10);
        totalHargaField.setEditable(false);

        hitungButton = new JButton("Hitung");
        hitungButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int jumlahTiket = Integer.parseInt(jumlahTiketField.getText());
                int jenisTiketIndex = jenisTiketComboBox.getSelectedIndex();
                int hargaTiket = 0;
                switch (jenisTiketIndex) {
                    case 0:
                        hargaTiket = HARGA_REGULER;
                        break;
                    case 1:
                        hargaTiket = HARGA_VIP;
                        break;
                    case 2:
                        hargaTiket = HARGA_PREMIUM;
                        break;
                }
                int totalHarga = jumlahTiket * hargaTiket;
                totalHargaField.setText(String.valueOf(totalHarga));
            }
        });

        // Buat panel
        JPanel mainPanel = new JPanel(new GridLayout(4, 2));
        mainPanel.add(judulLabel);
        mainPanel.add(new JLabel());
        mainPanel.add(jumlahTiketLabel);
        mainPanel.add(jumlahTiketField);
        mainPanel.add(jenisTiketLabel);
        mainPanel.add(jenisTiketComboBox);
        mainPanel.add(totalHargaLabel);
        mainPanel.add(totalHargaField);
        mainPanel.add(new JLabel());
        mainPanel.add(hitungButton);

        // Tambahkan panel ke frame
        add(mainPanel);

        // Set frame properties
        setTitle("Pemesanan Tiket Bioskop");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setVisible(true);
    }

    public static void main(String[] args) {
        new PemesananTiketApp();
    }
}