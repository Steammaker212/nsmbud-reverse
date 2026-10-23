/* sub_607FD23C
 * address: 0x607FD23C   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607FD23C(int *a1, int a2, int a3, int a4, int a5)
{
  int v6; // r6
  int v8; // r0
  int v9; // r1
  bool v10; // zf
  bool v11; // zf
  int v12; // r5
  int v13; // r6
  int v14; // r10
  float WrappedXPos; // s0
  int v16; // r0
  float v17; // s2
  bool v18; // fnf
  int v19; // r4
  int v20; // r0
  int v21; // [sp+0h] [bp-28h]

  v6 = 0;
  if ( (a2 & (1 << *a1)) != 0 )
    return v6;
  v8 = *((unsigned __int8 *)a1 + 31);
  if ( *((_BYTE *)a1 + 31) )
  {
    v9 = FIELD_U8(LevelInfo_instance, 19);
    if ( v8 != v9 && (!*((_BYTE *)a1 + 32) || *((unsigned __int8 *)a1 + 32) != v9) )
      return v6;
  }
  if ( a3 == 1 && *((_BYTE *)a1 + 36) )
    return v6;
  v10 = *((_BYTE *)a1 + 37) == 0;
  if ( *((_BYTE *)a1 + 37) )
    v10 = (a4 ^ 1) == 1;
  if ( !v10 )
    return v6;
  v11 = *((_BYTE *)a1 + 38) == 0;
  if ( *((_BYTE *)a1 + 38) )
    v11 = (a5 ^ 1) == 1;
  if ( !v11 )
    return v6;
  v12 = sub_6078A76C((_DWORD *)PlayerMgr_instance);
  v13 = 0;
  v21 = 0;
  do
  {
    if ( (v12 & (1 << v13)) == 0 )
      goto LABEL_39;
    v14 = *(_DWORD *)(PlayerMgr_instance + 4 * v13 + 32);
    if ( !v14 )
      goto LABEL_39;
    WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, FIELD_F32(v14, 11468));
    v16 = *a1;
    v17 = FIELD_F32(v14, 11472);
    if ( (unsigned int)*a1 > 1 )
    {
      if ( *((float *)a1 + 1) > WrappedXPos || *((float *)a1 + 2) < WrappedXPos )
        goto LABEL_39;
    }
    else if ( *((float *)a1 + 4) > v17 || *((float *)a1 + 3) < v17 )
    {
      goto LABEL_39;
    }
    if ( !*((_BYTE *)a1 + 30) )
      goto LABEL_38;
    if ( !v16 )
    {
      v18 = *((float *)a1 + 2) < WrappedXPos;
      goto LABEL_34;
    }
    if ( v16 == 2 )
    {
      v18 = *((float *)a1 + 3) < v17;
LABEL_34:
      if ( !v18 )
        goto LABEL_38;
      goto LABEL_39;
    }
    if ( v16 != 1 )
    {
      if ( *((float *)a1 + 4) > v17 )
        goto LABEL_39;
LABEL_38:
      ++v21;
      goto LABEL_39;
    }
    if ( *((float *)a1 + 1) <= WrappedXPos )
      goto LABEL_38;
LABEL_39:
    ++v13;
  }
  while ( v13 != 4 );
  if ( v21 <= 0 )
    return 0;
  v19 = *((unsigned __int8 *)a1 + 28);
  v6 = 1;
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      if ( sub_608FBB8C(v12) != 1 )
        return 0;
    }
    else
    {
      v20 = sub_608FBB8C(v12);
      if ( v19 == 2 )
      {
        return v20 > 1;
      }
      else if ( v20 != v21 )
      {
        return 0;
      }
    }
  }
  return v6;
}
