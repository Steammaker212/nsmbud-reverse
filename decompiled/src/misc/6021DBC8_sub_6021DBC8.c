/* sub_6021DBC8
 * address: 0x6021DBC8   size: 1124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021DBC8(_DWORD *a1)
{
  int i; // r6
  int *v3; // r0
  int v4; // r2
  int v5; // r1
  int v6; // r7
  int v7; // r4
  int v8; // r0
  bool v9; // zf
  int *v10; // r0
  int v11; // r2
  int v12; // r1
  int v13; // r7
  int v14; // r4
  int v15; // r0
  bool v16; // zf
  int *v17; // r0
  int v18; // r2
  int v19; // r1
  int v20; // r7
  int v21; // r4
  int v22; // r0
  bool v23; // zf
  int *v24; // r0
  int v25; // r2
  int v26; // r1
  int v27; // r7
  int v28; // r4
  int v29; // r0
  bool v30; // zf
  int *v31; // r0
  int v32; // r2
  int v33; // r1
  int v34; // r7
  int v35; // r4
  int v36; // r0
  bool v37; // zf
  int result; // r0
  int v39; // r11
  int v40; // r7
  int v41; // r0
  bool v42; // zf
  int v43; // r0
  bool v44; // zf
  int v45; // [sp+24h] [bp-3Ch] BYREF
  int v46; // [sp+28h] [bp-38h]
  int v47; // [sp+2Ch] [bp-34h]
  int v48; // [sp+30h] [bp-30h]
  int v49; // [sp+34h] [bp-2Ch]
  int v50; // [sp+38h] [bp-28h]

  for ( i = 0; i != 9; ++i )
  {
    while ( 2 )
    {
      switch ( i )
      {
        case 1:
          v3 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 1u, 0);
          v45 = *v3;
          v4 = v3[1];
          v46 = v4;
          v5 = v3[2];
          v47 = v5;
          v6 = v3[3];
          v7 = v3[4];
          v8 = v3[5];
          v48 = v6;
          v49 = v7;
          v50 = v8;
          if ( v45 != -1 )
          {
            v9 = v4 == -1;
            if ( v4 != -1 )
              v9 = v5 == -1;
            if ( !v9 && !v48 )
              a1[4] = sub_601DFFE4((int)&v45);
          }
          v10 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 1u, 1u);
          v45 = *v10;
          v11 = v10[1];
          v46 = v11;
          v12 = v10[2];
          v47 = v12;
          v13 = v10[3];
          v14 = v10[4];
          v15 = v10[5];
          v48 = v13;
          v49 = v14;
          v50 = v15;
          if ( v45 != -1 )
          {
            v16 = v11 == -1;
            if ( v11 != -1 )
              v16 = v12 == -1;
            if ( !v16 && !v48 )
              a1[5] = sub_601DFFE4((int)&v45);
          }
          v17 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 1u, 2u);
          v45 = *v17;
          v18 = v17[1];
          v46 = v18;
          v19 = v17[2];
          v47 = v19;
          v20 = v17[3];
          v21 = v17[4];
          v22 = v17[5];
          v48 = v20;
          v49 = v21;
          v50 = v22;
          if ( v45 != -1 )
          {
            v23 = v18 == -1;
            if ( v18 != -1 )
              v23 = v19 == -1;
            if ( !v23 && !v48 )
              a1[6] = sub_601DFFE4((int)&v45);
          }
          v24 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 1u, 3u);
          v45 = *v24;
          v25 = v24[1];
          v46 = v25;
          v26 = v24[2];
          v47 = v26;
          v27 = v24[3];
          v28 = v24[4];
          v29 = v24[5];
          v48 = v27;
          v49 = v28;
          v50 = v29;
          if ( v45 != -1 )
          {
            v30 = v25 == -1;
            if ( v25 != -1 )
              v30 = v26 == -1;
            if ( !v30 && !v48 )
              a1[7] = sub_601DFFE4((int)&v45);
          }
          v31 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 1u, 4u);
          v45 = *v31;
          v32 = v31[1];
          v46 = v32;
          v33 = v31[2];
          v47 = v33;
          v34 = v31[3];
          v35 = v31[4];
          v36 = v31[5];
          v48 = v34;
          v49 = v35;
          v50 = v36;
          if ( v45 != -1 )
          {
            v37 = v32 == -1;
            if ( v32 != -1 )
              v37 = v33 == -1;
            if ( !v37 && !v48 )
              a1[8] = sub_601DFFE4((int)&v45);
          }
          result = sub_6021E054(a1);
          break;
        case 2:
          sub_602044F0();
          ++i;
          continue;
        case 3:
          sub_601B0F0C(dword_60C8A8C0);
          ++i;
          continue;
        case 6:
          v39 = dword_60CC6D78;
          v40 = (unsigned __int8)FIELD_U32(dword_60CC6D78, 424);
          v41 = sub_6040E460(v40);
          v42 = v41 == 1;
          if ( v41 == 1 )
            v42 = FIELD_U32(v39, 412) == 6;
          if ( !v42 && !sub_601EABD0(dword_60C8B144) )
            sub_6021E8AC(a1);
          v43 = sub_6040E460(v40);
          v44 = v43 == 1;
          if ( v43 == 1 )
            v44 = FIELD_U32(v39, 412) == 6;
          if ( v44 || (result = sub_601EABD0(dword_60C8B144), result == 1) )
            result = sub_6021EDAC(a1);
          break;
        default:
          if ( sub_6021EE50(i, 0) != -1 )
            sub_6021F00C(a1, i, 0);
          if ( sub_6021EE50(i, 1) != -1 )
            sub_6021F00C(a1, i, 1);
          if ( sub_6021EE50(i, 2) != -1 )
            sub_6021F00C(a1, i, 2);
          if ( sub_6021EE50(i, 3) != -1 )
            sub_6021F00C(a1, i, 3);
          result = sub_6021EE50(i, 4);
          if ( result != -1 )
            result = sub_6021F00C(a1, i, 4);
          break;
      }
      break;
    }
  }
  return result;
}
