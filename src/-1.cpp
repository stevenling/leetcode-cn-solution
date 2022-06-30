#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {

    string d = "hyzqyljrnigxvdtneasepfahmtyhlohwxmkqcdfehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqlimjkfnqcqnajmebeddqsgl";
    cout << d.size() << endl;

    // 我的
    // string a = "khlzvvxxcawgwkzgospzxuaahjaqagdfjkmyutvhxclzprhwjdlzltpzgfvjkcxvksocfugzqkpaxexezbvggtkoccgdrbxocrfopuviqsyirxvphvdtvrjtsbospmgyfduvnomqaadoizelpeuwxvnlsasxjszyjwjmvgdqgowjjtwdncagtnyfdemijulnrivnymtvyqujvehhvruiolfkeprqexloytdxzmmekuepamvdzpixatgsupvpidmeyifjyxkzxgxrhjsxgzlkthgnusvxdugqcdebukrarpkpqmusempvoiqimrtevfsiapxhsagalurdsyjgyjmkvavxorrmnxbijmndlpamzjkghkpzemxukivfxtmckskiwhdnuqpqrsrdhblmjigayoxjbinxxiuxpsjtuchzbdpaxommfvlbpxfnxqtrvnucarxhhdtnedckkzrbqanufaglncjqiwofanuzpgsbqmctdiqlhelajtbmfnpqyoaoglifareljluigqyxmjxptldmpdirpeztskuevtzdvatgzmqexrauywreoslyelecnqjfhiaiqypiyimdyofiaxjhdaamrvahbvoznsfvylzdlqsdjxoifistklnkdszqkqxkwjfrehqbhlaanbcvzljcgeiatmwbxfqpyyxmoxeslmpghirzsaprxdcbobfljsjvweksqcrgjwxhawpubvyyggozkvwwytrwpmuguclsedybyknwipajkkuwlhsrmsrgdqkhttbakooghbskiqleczmtwmfkhncetoxujrfcosysppmffnskvfabunfzsibqlfetpcsnpcthjznotsfrersnmqqphelpngnlnczritcjawskqlyxaeaprjutfhlwexisvzgciaemvodvcnqtuwcjdnxyvlwwmyfiqakikzjzmkgwwlauwiyiflgoahyaavkuobwuociwtldxlwztffmevddnivmxdda";    
    // // string a = "khlzvvxxcawgwkzgospzxuaahjaqagdfjkmyutvhxclzprhwjdlzltpzgfvjkcxvksocfugzqkpaxexezbvggtkoccgdrbxocrfopuviqsyirxvphvdtvrjtsbospmgyfduvnomqaadoizelpeuwxvnlsasxjszyjwjmvgdqgowjjtwdncagtnyfdemijulnrivnymtvyqujvehhvruiolfkeprqexloytdxzmmekuepamvdzpixatgsupvpidmeyifjyxkzxgxrhjsxgzlkthgnusvxdugqcdebukrarpkpqmusempvoiqimrtevfsiapxhsagalurdsyjgyjmkvavxorrmnxbijmndlpamzjkghkpzemxukivfxtmckskiwhdnuqpqrsrdhblmjigayoxjbinxxiuxpsjtuchzbdpaxommfvlbpxfnxqtrvnucarxhhdtnedckkzrbqanufaglncjqiwofanuzpgsbqmctdiqlhelajtbmfnpqyoaoglifareljluigqyxmjxptldmpdirpeztskuevtzdvatgzmqexrauywreoslyelecnqjfhiaiqypiyimdyofiaxjhdaamrvahbvoznsfvylzdlqsdjxoifistklnkdszqkqxkwjfrehqbhlaanbcvzljcgeiatmwbxfqpyyxmoxeslmpghirzsaprxdcbobfljsjvweksqcrgjwxhawpubvyyggozkvwwytrwpmuguclsedybyknwipajkkuwlhsrmsrgdqkhttbakooghbskiqleczmtwmfkhncetoxujrfcosysppmffnskvfabunfzsibqlfetpcsnpcthjznotsfrersnmqqphelpngnlnczritcjawskqlyxaeaprjutfhlwexisvzgciaemvodvcnqtuwcjdnxyvlwwmyfiqakikzjzmkgwwlauwiyiflgoahyaavkuobwuociwtldxlwztffmevddnivmxdda...";
    
    // // 预期结果
    // string b = "khlzvvxxcawgwkzgospzxuaahjaqagdfjkmyutvhxclzprhwjdlzltpzgfvjkcxvksocfugzqkpaxexezbvggtkoccgdrbxocrfopuviqsyirxvphvdtvrjtsbospmgyfduvnomqaadoizelpeuwxvnlsasxjszyjwjmvgdqgowjjtwdncagtnyfdemijulnrivnymtvyqujvehhvruiolfkeprqexloytdxzmmekuepamvdzpixatgsupvpidmeyifjyxkzxgxrhjsxgzlkthgnusvxdugqcdebukrarpkpqmusempvoiqimrtevfsiapxhsagalurdsyjgyjmkvavxorrmnxbijmndlpamzjkghkpzemxukivfxtmckskiwhdnuqpqrsrdhblmjigayoxjbinxxiuxpsjtuchzbdpaxommfvlbpxfnxqtrvnucarxhhdtnedckkzrbqanufaglncjqiwofanuzpgsbqmctdiqlhelajtbmfnpqyoaoglifareljluigqyxmjxptldmpdirpeztskuevtzdvatgzmqexrauywreoslyelecnqjfhiaiqypiyimdyofiaxjhdaamrvahbvoznsfvylzdlqsdjxoifistklnkdszqkqxkwjfrehqbhlaanbcvzljcgeiatmwbxfqpyyxmoxeslmpghirzsaprxdcbobfljsjvweksqcrgjwxhawpubvyyggozkvwwytrwpmuguclsedybyknwipajkkuwlhsrmsrgdqkhttbakooghbskiqleczmtwmfkhncetoxujrfcosysppmffnskvfabunfzsibqlfetpcsnpcthjznotsfrersnmqqphelpngnlnczritcjawskqlyxaeaprjutfhlwexisvzgciaemvodvcnqtuwcjdnxyvlwwmyfiqakikzjzmkgwwlauwiyiflgoahyaavkuobwuociwtldxlwztffmevdeaddxmvin...";
    // string c = "uxzpsogzkwgwacxxvvzlhkaahjaqagdfjkmyutvhxclzskvxckjvfgzptlzldjwhrpocfugzqkpaxexezbvggtkoxriysqivupofrcoxbrdgccvphvdtvrjtsbospmgyfduvaslnvxwuepleziodaaqmonsxjszyjwjmvgdqgowjjtwdmynvirnlujimedfyntgacntvyqujvehhvruiolfkeprqpzdvmapeukemmzxdtyolxeixatgsupvpidmeyifjyxkzudxvsunghtklzgxsjhrxgxgqcdebukrarpkpqmusempvulagashxpaisfvetrmiqiordsyjgyjmkvavxorrmnxbiikuxmezpkhgkjzmapldnmjvfxtmckskiwhdnuqpqrsrdspxuixxnibjxoyagijmlbhjtuchzbdpaxommfvlbpxfnzkkcdentdhhxracunvrtqxrbqanufaglncjqiwofanuznfmbtjalehlqidtcmqbsgppqyoaoglifareljluigqyxtveukstzepridpmdltpxjmzdvatgzmqexrauywreoslyoydmiyipyqiaihfjqncelefiaxjhdaamrvahbvoznsfvsdknlktsifioxjdsqldzlyzqkqxkwjfrehqbhlaanbcvxomxyypqfxbwmtaiegcjlzeslmpghirzsaprxdcbobflvbupwahxwjgrcqskewvjsjyyggozkvwwytrwpmuguclssmrshlwukkjapiwnkybydergdqkhttbakooghbskiqlesocfrjuxotecnhkfmwtmzcysppmffnskvfabunfzsibqrerfstonzjhtcpnscpteflsnmqqphelpngnlnczritcjxewlhftujrpaeaxylqkswaisvzgciaemvodvcnqtuwcjkmzjzkikaqifymwwlvyxndgwwlauwiyiflgoahyaavkudvemfftzwlxdltwicouwboeaddxmvind"; // ea dd xm vi nd



    // int sizeA = a.size();
    // int sizeB = b.size();
    // int sizeC = c.size();
    // cout << "A size = " << sizeA << endl;
    // cout << "B size = " << sizeB << endl;
    // cout << "C size = " << sizeC << endl;

    // for(int i = 990; i < 1001; i++) {
    //     cout<< "i = " << i << "  " <<  a[i] << "  " << b[i]  << "  " << c[i] << endl;
    // }

    // for(int i = 0; i < sizeA; i++) {
    //     if(a[i] != b[i]) {
    //         cout<< "i = " << i << "  " <<  a[i] << "  " << b[i]  << "  " << c[i] << endl;
    //     }
    // }
}