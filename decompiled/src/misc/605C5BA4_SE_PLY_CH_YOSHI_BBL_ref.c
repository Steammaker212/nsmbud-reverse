/* SE_PLY_CH_YOSHI_BBL_ref
 * address: 0x605C5BA4   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CH_YOSHI_BBL_ref(int a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r5
  int v4; // r0
  int *v5; // r7
  int *v6; // r5
  int v7; // r0
  int v8; // r1
  bool v9; // vf
  int v10; // r0
  int v11; // r0
  int *v12; // r0
  unsigned int v13; // r0
  int v14; // r0
  int v15; // r1
  int result; // r0
  int v17; // r0
  _DWORD *v18; // r5
  int v19; // r0

  v2 = (_DWORD *)(a1 + 8036);
  if ( FIELD_U32(a1, 8036)
    && ((v3 = (_DWORD *)(a1 + 6260), (FIELD_U8(a1, 6265) & 0x20) != 0)
     || (*v3 & 0x482) != 0x400
     || (FIELD_U8(a1, 6805) & 8) != 0
     || !sub_605E3BBC(a1)) )
  {
    *v3 &= 0xFFFEEFFF;
    if ( FIELD_U32(a1, 6144) == 9 )
      sub_605EAB48(a1 + 6064, 0.0);
    *v2 = 0;
    FIELD_U32(a1, 8056) = 0;
    FIELD_U32(a1, 8080) = 0;
    FIELD_U32(a1, 8076) = 0;
    return 0;
  }
  else
  {
    v5 = (int *)(a1 + 8080);
    v4 = FIELD_U32(a1, 8080);
    if ( v4 )
    {
      v6 = *(int **)(a1 + 8068);
      if ( v4 >= 1 )
      {
        v7 = FIELD_U32(a1, 8072);
        v8 = FIELD_U32(a1, 8076);
        v9 = __OFSUB__(v8, v7);
        v10 = v8 - v7;
        if ( v10 < 0 != v9 )
          v10 = FIELD_U32(a1, 8076);
        v6 += 4 * v10;
      }
      if ( !*v6 || (v11 = *v6 - 1, (*v6 = v11) == 0) )
      {
        if ( *v2 == 2 || *v2 == 1 && !FIELD_U32(a1, 8048) )
        {
          v12 = sub_60002B90(FIELD_S8(a1, 6336), unk_60C263F8);
          sub_605D8938(a1, "SE_PLY_CH_YOSHI_BBL", v12);
        }
        sub_60409340(dword_60C9A1F0);
        sub_605C5E58(a1, v6);
        v13 = FIELD_U32(a1, 8048) + 1;
        if ( v13 > 0xF )
          v13 = 0;
        FIELD_U32(a1, 8048) = v13;
        v14 = *v5;
        if ( *v5 >= 1 )
        {
          --v14;
          v15 = FIELD_U32(a1, 8076) + 1;
          if ( v15 >= FIELD_U32(a1, 8072) )
            v15 = 0;
          FIELD_U32(a1, 8076) = v15;
          *v5 = v14;
        }
        if ( !v14 )
        {
          *v2 = 2;
          FIELD_U32(a1, 8056) = 40;
        }
      }
      FIELD_U32(a1, 8052) = 0;
    }
    else if ( *v2 == 2 )
    {
      v18 = (_DWORD *)(a1 + 8056);
      v17 = FIELD_U32(a1, 8056);
      if ( !v17 || (v19 = v17 - 1, (*v18 = v19) == 0) )
      {
        FIELD_U32(a1, 6260) &= 0xFFFEEFFF;
        if ( FIELD_U32(a1, 6144) == 9 )
          sub_605EAB48(a1 + 6064, 0.0);
        *v2 = 0;
        *v18 = 0;
        *v5 = 0;
        FIELD_U32(a1, 8076) = 0;
      }
    }
    result = FIELD_U32(a1, 8052) + 1;
    FIELD_U32(a1, 8052) = result;
  }
  return result;
}
