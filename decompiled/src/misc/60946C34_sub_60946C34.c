/* sub_60946C34
 * address: 0x60946C34   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60946C34(int a1, int a2, int a3)
{
  char *v6; // r7
  signed int i; // r6
  signed int v8; // r0
  int v9; // r5
  int v10; // r1
  unsigned __int64 *v11; // r0
  _DWORD v13[2]; // [sp+14h] [bp-45Ch] BYREF
  int (**v14)(); // [sp+1Ch] [bp-454h] BYREF
  char *v15; // [sp+20h] [bp-450h]
  int v16; // [sp+24h] [bp-44Ch]
  int v17; // [sp+2Ch] [bp-444h]
  int v18; // [sp+30h] [bp-440h]
  int v19; // [sp+34h] [bp-43Ch]
  __int64 v20; // [sp+38h] [bp-438h] BYREF
  int (**v21)(); // [sp+44h] [bp-42Ch] BYREF
  const char *v22; // [sp+48h] [bp-428h]

  v6 = *(char **)(a2 + 24);
  if ( v6 != "root" )
  {
    for ( i = 0; aRoot[i]; i += 2 )
    {
      if ( i >= 0x80000 )
      {
        i = 0;
        break;
      }
      if ( !aRoot[i + 1] )
      {
        ++i;
        break;
      }
    }
    v8 = FIELD_U32(a2, 28);
    if ( i >= v8 )
      i = v8 - 1;
    qmemcpy(v6, "root", i);
    v6[i] = 0;
  }
  v21 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v22 = "header";
  v15 = &byte_60ABC94D;
  v9 = sub_609A66E8(a2, &v21, &v14, a3);
  sub_609A5D84(v9, 3, a3);
  v21 = &sead__SafeStringBase__vtable;
  v22 = "type";
  sub_609A6388(v9, &v21, a1 + 36, a3);
  v14 = &sead__SafeStringBase__vtable;
  v15 = "version";
  sub_604209A4(&v21, "%d", FIELD_U32(a1, 112));
  sub_609A6388(v9, &v14, &v21, a3);
  v11 = (unsigned __int64 *)sub_60910E84(&v20, v10, 0, 0);
  sub_60911208(v11);
  sub_60910C8C(
    &v14,
    &dword_60CCFB30,
    &dword_60CCFB34,
    &dword_60CCFB38,
    &dword_60CCFB3C,
    &dword_60CCFB40,
    &dword_60CCFB44);
  sub_60910F70(&v20, &v14);
  sub_6016ACE0(&v21, "time stamp : %4d/%02d/%02d %02d:%02d:%02d", v14, v15, v16, v17, v18, v19);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "date";
  return sub_609A6388(v9, v13, &v21, a3);
}
