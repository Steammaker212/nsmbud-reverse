/* sub_608C0ABC
 * address: 0x608C0ABC   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C0ABC(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r2
  _WORD *v8; // r8
  int v9; // r7
  int *v10; // r4
  _WORD *v11; // r6
  __int16 v12; // r0^2
  __int16 v13; // r0^2
  __int16 v14; // r0^2
  __int16 v15; // r0^2
  __int16 v16; // r0^2
  __int16 v17; // r0^2
  __int16 v18; // r0^2
  int v19; // t1
  _BYTE v21[8]; // [sp+4h] [bp-54h] BYREF
  int v22; // [sp+Ch] [bp-4Ch] BYREF
  __int16 v23; // [sp+10h] [bp-48h]
  __int16 v24; // [sp+12h] [bp-46h]
  __int16 v25; // [sp+14h] [bp-44h]
  __int16 v26; // [sp+16h] [bp-42h]
  __int16 v27; // [sp+18h] [bp-40h]
  __int16 v28; // [sp+1Ah] [bp-3Eh]
  __int16 v29; // [sp+1Ch] [bp-3Ch]
  __int16 v30; // [sp+1Eh] [bp-3Ah]
  __int16 v31; // [sp+20h] [bp-38h]
  __int16 v32; // [sp+22h] [bp-36h]
  __int16 v33; // [sp+24h] [bp-34h]
  __int16 v34; // [sp+26h] [bp-32h]
  __int16 v35; // [sp+28h] [bp-30h]
  __int16 v36; // [sp+2Ah] [bp-2Eh]
  __int16 v37; // [sp+2Ch] [bp-2Ch]
  __int16 v38; // [sp+2Eh] [bp-2Ah]
  __int16 v39; // [sp+30h] [bp-28h]

  v7 = 1;
  if ( FIELD_S32(a3, 52) >= 1 )
  {
    v8 = (_WORD *)(a4 + 28);
    v9 = 0;
    v10 = (int *)(a1 + 1028);
    v11 = (_WORD *)(a5 + 2);
    while ( sub_608C11A0(a2, &v22, v21, v9) == 1 )
    {
      *((_DWORD *)v8 - 7) = v22;
      v12 = v24;
      *(v8 - 12) = v23;
      *(v8 - 11) = v12;
      v13 = v26;
      *(v8 - 10) = v25;
      *(v8 - 9) = v13;
      v14 = v28;
      *(v8 - 8) = v27;
      *(v8 - 7) = v14;
      v15 = v30;
      *(v8 - 6) = v29;
      *(v8 - 5) = v15;
      v16 = v32;
      *(v8 - 4) = v31;
      *(v8 - 3) = v16;
      v17 = v34;
      *(v8 - 2) = v33;
      *(v8 - 1) = v17;
      v18 = v36;
      *v8 = v35;
      v8[1] = v18;
      v19 = *v10;
      v10 += 832;
      sub_608CAE4C(v19, 0);
      ++v9;
      v8 += 16;
      *(v11 - 1) = v37;
      *v11 = v38;
      v11[1] = v39;
      v11 += 3;
      if ( v9 >= FIELD_U32(a3, 52) )
        return 1;
    }
    return 0;
  }
  return v7;
}
