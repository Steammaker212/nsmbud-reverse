/* sub_606044F8
 * address: 0x606044F8   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606044F8(int a1)
{
  int v2; // r1
  char v3; // r0
  int v4; // r7
  int v5; // r1
  unsigned int v6; // r3
  int result; // r0
  int v8; // r6
  int v9; // r5
  int v10; // r3
  int v11; // r5
  int v12; // r1
  unsigned int v13; // r3
  _BOOL4 a5; // lr
  int v15; // r6
  _QWORD *v16; // r7

  v2 = FIELD_U8(a1, 6123);
  v3 = 32 - v2;
  v4 = v2 - 32;
  v5 = 1 << v2;
  v6 = 1u >> v3;
  if ( v4 >= 0 )
  {
    v6 = 1 << v4;
    v5 = 0;
  }
  result = EventMgr__instance;
  v8 = *(_DWORD *)(EventMgr__instance + 16);
  v9 = *(_DWORD *)(EventMgr__instance + 20);
  v10 = v6 & v9;
  v11 = FIELD_U32(a1, 6108) & v9;
  v12 = v5 & v8 | v10;
  v13 = FIELD_U32(a1, 20);
  a5 = ((v13 >> 20) & 1) == 0;
  v15 = FIELD_U32(a1, 6104) & v8;
  if ( (((v12 != 0) ^ HIWORD(v13)) & 1) != 0 )
  {
    if ( FIELD_U64(a1, 6112) != __PAIR64__(v11, v15) )
    {
      FIELD_U32(a1, 6112) = v15;
      FIELD_U32(a1, 6116) = v11;
      EventMgr_set(
        result,
        FIELD_U8(a1, 6122),
        (unsigned __int8)FIELD_U16(a1, 6120),
        (v13 & 1) == 0,
        a5,
        0,
        0,
        0);
      result = FIELD_U8(a1, 20);
      if ( (result & 0xF0) == 0 )
      {
        if ( (FIELD_U8(a1, 24) & 1) != 0 )
          sub_60716778(
            TileMgr_instance,
            (unsigned int)FIELD_F32(a1, 108),
            (unsigned int)(float)-FIELD_F32(a1, 112),
            FIELD_U8(a1, 86));
        FIELD_U8(a1, 19) = 1;
        return 1;
      }
    }
  }
  else
  {
    v16 = (_QWORD *)(a1 + 6112);
    if ( (FIELD_U32(a1, 20) & 0xF0) == 0x20 && *v16 != __PAIR64__(v11, v15) )
      result = EventMgr_set(
                 EventMgr__instance,
                 FIELD_U8(a1, 6122),
                 (unsigned __int8)FIELD_U16(a1, 6120),
                 (FIELD_U32(a1, 20) & 1) != 0,
                 a5,
                 0,
                 0,
                 0);
    *(_DWORD *)v16 = v15;
    FIELD_U32(a1, 6116) = v11;
  }
  return result;
}
