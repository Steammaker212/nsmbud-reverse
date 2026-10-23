/* sub_6098390C
 * address: 0x6098390C   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6098390C(_DWORD *a1, int a2, _DWORD *a3, const char *a4)
{
  _DWORD *v8; // r8
  _DWORD *v9; // r7
  int v10; // r2
  unsigned int v11; // r4
  bool v12; // zf
  const char *v13; // r1
  int v14; // r2
  int *v15; // r5
  bool v16; // zf
  nn__util__BinaryFileHeader *v17; // r2
  bool v18; // zf
  _DWORD *v20; // r7
  _DWORD *v21; // r9
  int v22; // r2
  unsigned int v23; // r5
  bool v24; // zf
  int v25; // r2
  _WORD *v26; // r4
  bool v27; // zf
  _DWORD *v28; // r1
  nn__util__BinaryFileHeader *v29; // r2
  int v30; // r3
  int v31; // [sp+14h] [bp-13Ch]
  _DWORD *v32; // [sp+18h] [bp-138h]
  unsigned int v33; // [sp+1Ch] [bp-134h] BYREF
  int v34; // [sp+20h] [bp-130h]
  unsigned int v35; // [sp+11Ch] [bp-34h] BYREF
  int v36; // [sp+120h] [bp-30h]
  int v37; // [sp+124h] [bp-2Ch] BYREF
  int v38; // [sp+128h] [bp-28h] BYREF

  if ( sub_6085F3D0(&v38, &v37, a4) == 1 )
  {
    if ( sub_60990A88(v38) == 1 )
    {
      v31 = a2;
      v32 = a3;
      sub_6085F4D8((int)&v33, (int)a4);
      v8 = (_DWORD *)a1[6];
      v9 = a1 + 5;
      if ( v8 != a1 + 5 )
      {
        while ( 1 )
        {
          v35 = 0;
          v36 = 0;
          v10 = sub_60864C50(v8 + 2, "bgsh/__ArchiveShader.bnsh");
          if ( v10 >= 0 )
          {
            v11 = sub_60864BE8(v8 + 2, &v35, v10);
            v12 = v11 == 0;
            if ( v11 )
              v12 = v36 == 0;
            if ( !v12 )
            {
              v13 = "bgsh/__ArchiveShader_111.bushvt";
              if ( v38 == 110 )
                v13 = "bgsh/__ArchiveShader_110.bushvt";
              v14 = sub_60864C50(v8 + 2, v13);
              if ( v14 >= 0 )
              {
                v15 = (int *)sub_60864BE8(v8 + 2, &v35, v14);
                v16 = v15 == 0;
                if ( v15 )
                  v16 = v36 == 0;
                if ( !v16 && sub_6085F5E4(v15, (int)&v33) != -1 )
                  break;
              }
            }
          }
          v8 = (_DWORD *)v8[1];
          if ( v8 == v9 )
            return 0;
        }
        v28 = v32;
        v29 = (nn__util__BinaryFileHeader *)v11;
        v30 = (int)v15;
LABEL_37:
        sub_6085F160(v31, v28, v29, v30, 0, 0);
        return 1;
      }
    }
    else
    {
      v20 = (_DWORD *)a1[6];
      v21 = a1 + 5;
      if ( v20 != a1 + 5 )
      {
        v31 = a2;
        while ( 1 )
        {
          v33 = 0;
          v34 = 0;
          v22 = sub_60864C50(v20 + 2, "bgsh/__ArchiveShader.bnsh");
          if ( v22 >= 0 )
          {
            v23 = sub_60864BE8(v20 + 2, &v33, v22);
            v24 = v23 == 0;
            if ( v23 )
              v24 = v34 == 0;
            if ( !v24 )
            {
              v25 = sub_60864C50(v20 + 2, "bgsh/__ArchiveShader.bushvt");
              if ( v25 >= 0 )
              {
                v26 = (_WORD *)sub_60864BE8(v20 + 2, &v33, v25);
                v27 = v26 == 0;
                if ( v26 )
                  v27 = v34 == 0;
                if ( !v27 && sub_6085F594(v26, v38, v37) != -1 )
                  break;
              }
            }
          }
          v20 = (_DWORD *)v20[1];
          if ( v20 == v21 )
            return 0;
        }
        v28 = a3;
        v29 = (nn__util__BinaryFileHeader *)v23;
        v30 = (int)v26;
        goto LABEL_37;
      }
    }
  }
  else
  {
    nn__util__SNPrintf((nn__util *)&v33, (char *)0x100, (unsigned int)"ArchiveShader-%s.bnsh", a4);
    v35 = 0;
    v17 = (nn__util__BinaryFileHeader *)(*(int (__fastcall **)(_DWORD *, unsigned int *, int, unsigned int *))(*a1 + 24))(
                                          a1,
                                          &v35,
                                          1650946920,
                                          &v33);
    v18 = v17 == 0;
    if ( !v17 )
      v18 = v35 == 0;
    if ( !v18 )
    {
      sub_6085F160(a2, a3, v17, 0, 0, 0);
      return 1;
    }
  }
  return 0;
}
