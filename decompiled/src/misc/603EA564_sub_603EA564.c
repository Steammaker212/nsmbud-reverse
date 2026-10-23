/* sub_603EA564
 * address: 0x603EA564   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EA564(int result)
{
  _DWORD *v1; // r2
  _BYTE *v2; // r1
  int v3; // r3
  bool v4; // zf
  unsigned int v5; // r3
  int v6; // r3
  bool v7; // zf
  unsigned int v8; // r3
  int v9; // r3
  bool v10; // zf
  unsigned int v11; // r3
  int v12; // r2
  bool v13; // zf
  unsigned int v14; // r1

  v1 = (_DWORD *)PlayerMgr_instance;
  v2 = (_BYTE *)dword_60C9A1E0;
  v3 = FIELD_U32(PlayerMgr_instance, 32);
  v4 = v3 == 0;
  if ( v3 )
    v4 = FIELD_U8(dword_60C9A1E0, 568) == 0;
  if ( !v4 )
  {
    v5 = FIELD_U32(result, 60);
    if ( v5 >= 4 )
      v5 = 0;
    *(_DWORD *)(result + 4 * v5 + 64) = 0;
    ++FIELD_U32(result, 60);
  }
  v6 = v1[9];
  v7 = v6 == 0;
  if ( v6 )
    v7 = v2[604] == 0;
  if ( !v7 )
  {
    v8 = FIELD_U32(result, 60);
    if ( v8 >= 4 )
      v8 = 0;
    *(_DWORD *)(result + 4 * v8 + 64) = 1;
    ++FIELD_U32(result, 60);
  }
  v9 = v1[10];
  v10 = v9 == 0;
  if ( v9 )
    v10 = v2[640] == 0;
  if ( !v10 )
  {
    v11 = FIELD_U32(result, 60);
    if ( v11 >= 4 )
      v11 = 0;
    *(_DWORD *)(result + 4 * v11 + 64) = 2;
    ++FIELD_U32(result, 60);
  }
  v12 = v1[11];
  v13 = v12 == 0;
  if ( v12 )
    v13 = v2[676] == 0;
  if ( !v13 )
  {
    v14 = FIELD_U32(result, 60);
    if ( v14 >= 4 )
      v14 = 0;
    *(_DWORD *)(result + 4 * v14 + 64) = 3;
    ++FIELD_U32(result, 60);
  }
  return result;
}
