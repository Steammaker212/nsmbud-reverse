/* sub_6017833C
 * address: 0x6017833C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017833C(int a1, int a2)
{
  int *v4; // r10
  int v5; // r2
  int v6; // r9
  int *v7; // r8
  int result; // r0
  int v9; // r1
  int v10; // [sp+4h] [bp-54h]
  int *v11; // [sp+8h] [bp-50h]
  _DWORD v12[2]; // [sp+Ch] [bp-4Ch] BYREF
  _DWORD v13[2]; // [sp+14h] [bp-44h] BYREF
  int (**v14)(); // [sp+1Ch] [bp-3Ch] BYREF
  int *v15; // [sp+20h] [bp-38h]
  int v16; // [sp+24h] [bp-34h]
  int v17; // [sp+28h] [bp-30h] BYREF

  v15 = &v17;
  v14 = &BufferedSafeStringBase_char_vtable_probably;
  v16 = 10;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v14);
  v4 = (int *)(a1 + 44);
  v5 = 0;
  *(_BYTE *)v15 = 0;
  v14 = &off_60BD4F50;
  do
  {
    v6 = 6;
    v10 = v5;
    v11 = v4;
    v7 = (int *)(a1 + 104 * v5 + 28);
    do
    {
      result = *v4;
      if ( *v4 )
      {
        v13[0] = &sead__SafeStringBase__vtable;
        v9 = *v7;
        v12[0] = &sead__SafeStringBase__vtable;
        v13[1] = v9;
        v12[1] = FIELD_U32(result, 8);
        sub_60199D24(&v14, v13, v12);
        result = sub_6018194C(a2, &v14);
        if ( result == -1 )
        {
          sub_60199D24(&v14, v12, v13);
          result = sub_6018194C(a2, &v14);
        }
        v4[6] = result;
      }
      --v6;
      ++v4;
    }
    while ( v6 );
    v5 = v10 + 1;
    v4 = v11 + 26;
  }
  while ( v10 != 255 );
  return result;
}
