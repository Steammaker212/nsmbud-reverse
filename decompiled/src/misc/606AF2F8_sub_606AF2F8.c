/* sub_606AF2F8
 * address: 0x606AF2F8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AF2F8(int a1)
{
  int v1; // r6
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r7
  int v9; // r10
  bool v10; // zf
  int v11; // r1
  int v12; // r9
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // t1

  v3 = 0;
  v4 = FIELD_U32(a1, 1256);
  if ( v4 )
    FIELD_U32(a1, 1256) = v4 - 1;
  v5 = FIELD_U32(a1, 1260);
  if ( v5 )
    FIELD_U32(a1, 1260) = v5 - 1;
  v6 = FIELD_U32(a1, 1264);
  if ( v6 )
    FIELD_U32(a1, 1264) = v6 - 1;
  v7 = FIELD_U32(a1, 1268);
  if ( v7 )
    FIELD_U32(a1, 1268) = v7 - 1;
  v8 = *(_DWORD **)(a1 + 912);
  if ( v8 )
  {
    v9 = 0;
    do
    {
      v10 = *v8 == 0;
      if ( *v8 )
      {
        v1 = *(_DWORD *)(*v8 + 2196);
        v10 = v1 == 0;
      }
      if ( v10 )
        goto LABEL_32;
      v11 = FIELD_U8(v1, 533);
      v12 = FIELD_S8(v1, 84);
      if ( v11 == 2 )
      {
        if ( FIELD_S8(v1, 84) <= 3 )
        {
          v3 |= 1 << v12;
          goto LABEL_27;
        }
        v3 |= 0x10u;
      }
      else if ( v11 == 1 && (unsigned __int8)v12 <= 3u && !sub_607B7028(v1) )
      {
        v3 |= 1 << v12;
        v13 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v1, 11408));
        if ( v13 )
        {
          v14 = FIELD_S8(v13, 84);
          if ( v14 <= 3 )
            v3 |= 1 << v14;
        }
        goto LABEL_27;
      }
      if ( v9 )
      {
        v1 = v9;
LABEL_27:
        v15 = a1 + 4 * v12;
        v17 = FIELD_U32(v15, 1256);
        v16 = (_DWORD *)(v15 + 1256);
        if ( !v17 && (FIELD_U8(v1, 1210) & 1) != 0 )
        {
          FIELD_U8(a1, 1250) = 1;
          *v16 = 4;
        }
        v9 = v1;
        goto LABEL_32;
      }
      v9 = 0;
LABEL_32:
      v8 = (_DWORD *)v8[1];
    }
    while ( v8 );
  }
  return v3;
}
