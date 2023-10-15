import java.lang.String;
import java.lang.StringBuilder;

public class Solution {

    public static void main(String[] args) {
        String res = reverseStr(
                "uxzpsogzkwgwacxxvvzlhkaahjaqagdfjkmyutvhxclzskvxckjvfgzptlzldjwhrpocfugzqkpaxexezbvggtkoxriysqivupofrcoxbrdgccvphvdtvrjtsbospmgyfduvaslnvxwuepleziodaaqmonsxjszyjwjmvgdqgowjjtwdmynvirnlujimedfyntgacntvyqujvehhvruiolfkeprqpzdvmapeukemmzxdtyolxeixatgsupvpidmeyifjyxkzudxvsunghtklzgxsjhrxgxgqcdebukrarpkpqmusempvulagashxpaisfvetrmiqiordsyjgyjmkvavxorrmnxbiikuxmezpkhgkjzmapldnmjvfxtmckskiwhdnuqpqrsrdspxuixxnibjxoyagijmlbhjtuchzbdpaxommfvlbpxfnzkkcdentdhhxracunvrtqxrbqanufaglncjqiwofanuznfmbtjalehlqidtcmqbsgppqyoaoglifareljluigqyxtveukstzepridpmdltpxjmzdvatgzmqexrauywreoslyoydmiyipyqiaihfjqncelefiaxjhdaamrvahbvoznsfvsdknlktsifioxjdsqldzlyzqkqxkwjfrehqbhlaanbcvxomxyypqfxbwmtaiegcjlzeslmpghirzsaprxdcbobflvbupwahxwjgrcqskewvjsjyyggozkvwwytrwpmuguclssmrshlwukkjapiwnkybydergdqkhttbakooghbskiqlesocfrjuxotecnhkfmwtmzcysppmffnskvfabunfzsibqrerfstonzjhtcpnscpteflsnmqqphelpngnlnczritcjxewlhftujrpaeaxylqkswaisvzgciaemvodvcnqtuwcjkmzjzkikaqifymwwlvyxndgwwlauwiyiflgoahyaavkudvemfftzwlxdltwicouwboeaddxmvind",
                // "hyzqyljrnigxvdtneasepfahmtyhlohwxmkqcdfehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqlimjkfnqcqnajmebeddqsgl",
                22);
        System.out.println(res);
    }

    public static String reverseStr1(String s, int k) {
        int n = s.length();
        char[] arr = s.toCharArray();
        for (int i = 0; i < n; i += 2 * k) {
            reverse(arr, i, Math.min(i + k, n) - 1);
        }
        return new String(arr);
    }

    public static void reverse(char[] arr, int left, int right) {
        while (left < right) {
            char temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    // "khlzvvxxcawgwkzgospzxuaahjaqagdfjkmyutvhxclzprhwjdlzltpzgfvjkcxvksocfugzqkpaxexezbvggtkoccgdrbxocrfopuviqsyirxvphvdtvrjtsbospmgyfduvnomqaadoizelpeuwxvnlsasxjszyjwjmvgdqgowjjtwdncagtnyfdemijulnrivnymtvyqujvehhvruiolfkeprqexloytdxzmmekuepamvdzpixatgsupvpidmeyifjyxkzxgxrhjsxgzlkthgnusvxdugqcdebukrarpkpqmusempvoiqimrtevfsiapxhsagalurdsyjgyjmkvavxorrmnxbijmndlpamzjkghkpzemxukivfxtmckskiwhdnuqpqrsrdhblmjigayoxjbinxxiuxpsjtuchzbdpaxommfvlbpxfnxqtrvnucarxhhdtnedckkzrbqanufaglncjqiwofanuzpgsbqmctdiqlhelajtbmfnpqyoaoglifareljluigqyxmjxptldmpdirpeztskuevtzdvatgzmqexrauywreoslyelecnqjfhiaiqypiyimdyofiaxjhdaamrvahbvoznsfvylzdlqsdjxoifistklnkdszqkqxkwjfrehqbhlaanbcvzljcgeiatmwbxfqpyyxmoxeslmpghirzsaprxdcbobfljsjvweksqcrgjwxhawpubvyyggozkvwwytrwpmuguclsedybyknwipajkkuwlhsrmsrgdqkhttbakooghbskiqleczmtwmfkhncetoxujrfcosysppmffnskvfabunfzsibqlfetpcsnpcthjznotsfrersnmqqphelpngnlnczritcjawskqlyxaeaprjutfhlwexisvzgciaemvodvcnqtuwcjdnxyvlwwmyfiqakikzjzmkgwwlauwiyiflgoahyaavkuobwuociwtldxlwztffmevdeaddxmvin...
    static String reverseStr(String s, int k) {
        int size = s.length();
        String ttt = s.substring(990, 1000);
        System.out.println("ttt = " + ttt);
        StringBuilder sb = new StringBuilder();
        if (k == 1) {
            return s;
        }
        if (size == k || size < k) {
            // 反转本身
            return new StringBuilder(s).reverse().toString();
        } else if (size <= 2 * k && size >= k) {
            // 反转前 k 个
            String newS = s.substring(0, k);
            // 获取反转的
            StringBuilder reverseNewS = new StringBuilder(newS).reverse();
            sb.append(reverseNewS);
            String back = s.substring(k, size);
            sb.append(back);
            return sb.toString();
        } else if (size > 2 * k) {
            // 反转的次数
            int i = 0;
            int count = 0;
            while (size - count >= 2 * k) {
                // 反转
                if (i * k <= size) {
                    // 0-k 2k-3k
                    String newS = s.substring(i * k, (i + 1) * k);
                    StringBuilder reverseNewS = new StringBuilder(newS).reverse();
                    sb.append(reverseNewS);
                }

                // 不用反转
                if ((i + 2) * k < size) {
                    // k-2k 3k-4k
                    String back = s.substring((i + 1) * k, (i + 2) * k);
                    sb.append(back);
                }
                count = count + 2 * k;
                // System.out.println(sb);
                // System.out.println("");

                i = i + 2;
            }
            // 剩余的小于 k 全部反转
            if (size - count < k) {
                String back = s.substring(count, size);
                StringBuilder reverseNewS = new StringBuilder(back).reverse();
                sb.append(reverseNewS);
                count = size;
            } else {
                // 剩余的大于等于 k 小于 2k
                String back = s.substring(count, count + k);
                StringBuilder reverseNewS = new StringBuilder(back).reverse();
                sb.append(reverseNewS);
                String back2 = s.substring(count + k, size);
                sb.append(back2);
                count = size;
            }
            System.out.println(sb);
            return sb.toString();
        }
        return "";
    }
}
