function BCDConversion(n)
    {
        // Base Case
        if (n == 0) {
            document.write("0000");
            return;
        }
 
        // To store the reverse of n
        let rev = 0;
 
        // Reversing the digits
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n = parseInt(n / 10, 10);
        }
 
        // Iterate through all digits in rev
        while (rev > 0) {
 
            // Find Binary for each digit
            // using bitset
            let b = (rev % 10).toString(2);
            while(b.length != 4)
            {
                b = "0" + b;
                
            }
 
            // Print the Binary conversion
            // for current digit
            document.write(b + " ");
 
            // Divide rev by 10 for next digit
            rev = parseInt(rev / 10, 10);
        }
    }
 
    // Driver Code
    // Given Number
    let N = 12;
 
    // Function Call
    BCDConversion(N);