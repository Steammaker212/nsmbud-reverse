/* sub_60675744
 * address: 0x60675744   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60675744(unsigned int *a1, int a2, int a3)
{
  unsigned int *v6; // r7
  unsigned int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r4
  unsigned int v11; // r5
  unsigned int v12; // r6
  unsigned int v13; // r2
  unsigned int v14; // r3
  unsigned int v15; // r4
  unsigned int v16; // r5
  unsigned int v17; // r6
  unsigned int v18; // r0
  unsigned int v19; // r1
  unsigned __int32 v20; // r2
  unsigned int v21; // r3
  unsigned int v22; // r4
  unsigned int v23; // r5
  unsigned int v24; // r6
  unsigned int v25; // r2
  unsigned int v26; // r3
  unsigned int v27; // r4
  unsigned int v28; // r5
  unsigned int v29; // r6
  unsigned int v30; // r0
  unsigned int v31; // r1
  unsigned __int32 v32; // r2
  unsigned int v33; // r3
  unsigned int v34; // r4
  unsigned int v35; // r5
  unsigned int v36; // r6
  unsigned int v37; // r2
  unsigned int v38; // r3
  unsigned int v39; // r4
  unsigned int v40; // r5
  unsigned int v41; // r6
  unsigned int v42; // r0
  unsigned int v43; // r1
  unsigned __int32 v44; // r2
  unsigned int v45; // r3
  unsigned int v46; // r4
  unsigned int v47; // r5
  unsigned int v48; // r6
  unsigned int v49; // r2
  unsigned int v50; // r3
  unsigned int v51; // r4
  unsigned int v52; // r5
  unsigned int v53; // r6
  unsigned int v54; // r0
  unsigned int v55; // r1
  float32x2_t v57; // [sp+0h] [bp-60h] BYREF
  unsigned int v58; // [sp+8h] [bp-58h]
  unsigned int v59; // [sp+Ch] [bp-54h]
  unsigned int v60; // [sp+10h] [bp-50h]
  unsigned int v61; // [sp+14h] [bp-4Ch]
  unsigned int v62; // [sp+18h] [bp-48h]
  unsigned int v63; // [sp+1Ch] [bp-44h]
  unsigned int v64; // [sp+20h] [bp-40h]
  unsigned int v65; // [sp+24h] [bp-3Ch]
  unsigned int v66; // [sp+28h] [bp-38h]
  unsigned int v67; // [sp+2Ch] [bp-34h]
  unsigned int v68; // [sp+30h] [bp-30h] BYREF
  unsigned int v69; // [sp+34h] [bp-2Ch]
  unsigned int v70; // [sp+38h] [bp-28h]

  v6 = a1 + 1530;
  sub_60699BB4(a1 + 1530, a2, a3);
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v10 = v6[3];
  v11 = v6[4];
  v12 = v6[5];
  v6 += 6;
  v57.n64_u64[0] = __PAIR64__(v8, v7);
  v58 = v9;
  v59 = v10;
  v60 = v11;
  v61 = v12;
  v13 = v6[1];
  v14 = v6[2];
  v15 = v6[3];
  v16 = v6[4];
  v17 = v6[5];
  v62 = *v6;
  v63 = v13;
  v64 = v14;
  v65 = v15;
  v66 = v16;
  v67 = v17;
  Mtx34_rotateZ(&v57, a1 + 1546);
  v18 = a1[1544];
  v19 = a1[1543];
  v68 = a1[1542];
  v69 = v19;
  v70 = v18;
  (*(void (__fastcall **)(int, unsigned int, float32x2_t *, unsigned int *))(*(_DWORD *)a2 + 96))(
    a2,
    a1[1545],
    &v57,
    &v68);
  sub_60699BB4(a1 + 1547, a2, a3);
  v20 = a1[1548];
  v21 = a1[1549];
  v22 = a1[1550];
  v23 = a1[1551];
  v24 = a1[1552];
  v57.n64_u32[0] = a1[1547];
  v57.n64_u32[1] = v20;
  v58 = v21;
  v59 = v22;
  v60 = v23;
  v61 = v24;
  v25 = a1[1554];
  v26 = a1[1555];
  v27 = a1[1556];
  v28 = a1[1557];
  v29 = a1[1558];
  v62 = a1[1553];
  v63 = v25;
  v64 = v26;
  v65 = v27;
  v66 = v28;
  v67 = v29;
  Mtx34_rotateZ(&v57, a1 + 1563);
  v30 = a1[1561];
  v31 = a1[1560];
  v68 = a1[1559];
  v69 = v31;
  v70 = v30;
  (*(void (__fastcall **)(int, unsigned int, float32x2_t *, unsigned int *))(*(_DWORD *)a2 + 96))(
    a2,
    a1[1562],
    &v57,
    &v68);
  sub_60699BB4(a1 + 1564, a2, a3);
  v32 = a1[1565];
  v33 = a1[1566];
  v34 = a1[1567];
  v35 = a1[1568];
  v36 = a1[1569];
  v57.n64_u32[0] = a1[1564];
  v57.n64_u32[1] = v32;
  v58 = v33;
  v59 = v34;
  v60 = v35;
  v61 = v36;
  v37 = a1[1571];
  v38 = a1[1572];
  v39 = a1[1573];
  v40 = a1[1574];
  v41 = a1[1575];
  v62 = a1[1570];
  v63 = v37;
  v64 = v38;
  v65 = v39;
  v66 = v40;
  v67 = v41;
  Mtx34_rotateZ(&v57, a1 + 1580);
  v42 = a1[1578];
  v43 = a1[1577];
  v68 = a1[1576];
  v69 = v43;
  v70 = v42;
  (*(void (__fastcall **)(int, unsigned int, float32x2_t *, unsigned int *))(*(_DWORD *)a2 + 96))(
    a2,
    a1[1579],
    &v57,
    &v68);
  sub_60699BB4(a1 + 1581, a2, a3);
  v44 = a1[1582];
  v45 = a1[1583];
  v46 = a1[1584];
  v47 = a1[1585];
  v48 = a1[1586];
  v57.n64_u32[0] = a1[1581];
  v57.n64_u32[1] = v44;
  v58 = v45;
  v59 = v46;
  v60 = v47;
  v61 = v48;
  v49 = a1[1588];
  v50 = a1[1589];
  v51 = a1[1590];
  v52 = a1[1591];
  v53 = a1[1592];
  v62 = a1[1587];
  v63 = v49;
  v64 = v50;
  v65 = v51;
  v66 = v52;
  v67 = v53;
  Mtx34_rotateZ(&v57, a1 + 1597);
  v54 = a1[1595];
  v55 = a1[1594];
  v68 = a1[1593];
  v69 = v55;
  v70 = v54;
  return (*(int (__fastcall **)(int, unsigned int, float32x2_t *, unsigned int *))(*(_DWORD *)a2 + 96))(
           a2,
           a1[1596],
           &v57,
           &v68);
}
