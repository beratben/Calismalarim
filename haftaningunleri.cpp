int main()
{
    setlocale(LC_ALL, "Turkish"); // Türkçe karakterler için yerel ayar

    int gun;

    cout << "Haftanın hangi gununde oldugunuzu giriniz (1-7 arası): ";
    cin >> gun;

    switch (gun)
    {
    case 1:
        cout << "Pazartesi";
        break;
    case 2:
        cout << "Salı";
        break;
    case 3:
        cout << "Çarşamba";
        break;
    case 4:
        cout << "Perşembe";
        break;
    case 5:
        cout << "Cuma";
        break;
    case 6:
        cout << "Cumartesi";
        break;
    case 7:
        cout << "Pazar";
        break;
    default:
        cout << "Geçersiz bir gün numarası girdiniz!";
        break;
    }

    return 0; // Programın sonu
}
