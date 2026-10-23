/* sub_6048A1A0
 * address: 0x6048A1A0   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048A1A0(int a1)
{
  int v2; // r5
  int v3; // r7
  int v4; // r0
  int v5; // r8
  int v6; // r10
  int v7; // r11
  int (**v8)(); // r1
  int v9; // r9
  int v10; // r0
  int v11; // r0
  int v12; // r7
  int i; // r1
  int result; // r0
  int v15; // [sp+8h] [bp-40h]
  int (**v16)(); // [sp+14h] [bp-34h] BYREF
  int v17; // [sp+18h] [bp-30h]
  int (**v18)(); // [sp+1Ch] [bp-2Ch] BYREF
  int v19; // [sp+20h] [bp-28h]

  v2 = 0;
  v3 = a1 + 3820;
  v15 = a1 + 3820;
  do
  {
    v4 = sub_604918C8(v2);
    v5 = 0;
    v18 = &sead__SafeStringBase__vtable;
    v19 = v4;
    v6 = FIELD_U32(a1, 3824);
    if ( v6 != v3 )
    {
      v7 = FIELD_U32(a1, 3832);
      v8 = &sead__SafeStringBase__vtable;
      v5 = 0;
      v9 = v3 - v7;
      v10 = v6 - v7;
      while ( 1 )
      {
        v11 = FIELD_U32(v10, 88);
        v16 = &sead__SafeStringBase__vtable;
        v17 = v11;
        ((void (__fastcall *)(int (***)()))v8[3])(&v18);
        ((void (__fastcall *)(int (***)()))v18[3])(&v18);
        v12 = v19;
        ((void (__fastcall *)(int (***)()))v16[3])(&v16);
        if ( v12 == v17 )
          break;
        for ( i = 1; *(unsigned __int8 *)(v19 + i - 1) == *(unsigned __int8 *)(v17 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v19 + i - 1) )
            goto LABEL_15;
          if ( i > 0x80000 || *(unsigned __int8 *)(v19 + i) != *(unsigned __int8 *)(v17 + i) )
            break;
          if ( !*(_BYTE *)(v19 + i) )
            goto LABEL_15;
        }
        v6 = FIELD_U32(v6, 4);
        ++v5;
        v10 = v6 - v7;
        if ( v6 - v7 == v9 )
          break;
        v8 = v18;
      }
LABEL_15:
      v3 = v15;
    }
    result = a1 + 4 * v2++;
    FIELD_U32(result, 5848) = v5;
  }
  while ( v2 != 7 );
  return result;
}
