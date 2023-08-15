canSum=(n,ls,dp={})=>{
if (n in dp) return dp[n];
if (n===0) return true;
if (n<0) return false;

for (let i of ls){
 if (canSum(n-i,ls,dp)===true){
 dp[n]=true;
 return true;
 }
}
dp[n]=false;
return false;

};


console.log(canSum(7,[2,4]));
console.log(canSum(7,[2,3]));
console.log(canSum(7,[5,4,3,7]));
console.log(canSum(300,[7,21]));

