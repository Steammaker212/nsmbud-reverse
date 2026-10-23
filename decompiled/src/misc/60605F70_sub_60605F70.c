/* sub_60605F70
 * address: 0x60605F70   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60605F70(int a1)
{
  int v2; // r0
  char v3; // r1
  int v4; // r3
  __int64 v5; // r0
  __int64 v6; // r6
  unsigned int v7; // r2
  bool v8; // zf
  int result; // r0
  int v10; // r1
  unsigned int v11; // r5
  unsigned int v12; // r7
  unsigned int v13; // r8
  unsigned int v14; // r9
  unsigned int v15; // r0

  v2 = FIELD_U8(a1, 6122);
  v3 = 32 - v2;
  v4 = v2 - 32;
  LODWORD(v5) = 1 << v2;
  HIDWORD(v5) = 1u >> v3;
  if ( v4 >= 0 )
  {
    HIDWORD(v5) = 1 << v4;
    LODWORD(v5) = 0;
  }
  v6 = *(_QWORD *)(EventMgr__instance + 16);
  v7 = FIELD_U32(a1, 6104) & v6;
  v8 = (v5 & v6) == 0;
  result = a1 + 6112;
  v10 = FIELD_U32(a1, 6108) & HIDWORD(v6);
  if ( v8 )
  {
    *(_DWORD *)result = v7;
    FIELD_U32(a1, 6116) = v10;
  }
  else if ( *(_QWORD *)result != __PAIR64__(v10, v7) )
  {
    *(_DWORD *)result = v7;
    FIELD_U32(a1, 6116) = v10;
    v11 = FIELD_U8(a1, 6127);
    v12 = FIELD_U8(a1, 6128);
    v13 = FIELD_U8(a1, 6129);
    v14 = FIELD_U8(a1, 6130);
    v15 = *(unsigned __int8 *)(a1 + 6127 + (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 30));
    if ( v11 == 255 )
      v11 = 0;
    if ( v12 != 255 )
      v11 = v12;
    if ( v13 != 255 )
      v11 = v13;
    if ( v14 != 255 )
      v11 = v14;
    if ( v15 != 255 )
      v11 = v15;
    EventMgr_set(EventMgr__instance, v11, 0, (FIELD_U8(a1, 20) & 1) == 0, 0, 0, 0, 0);
    result = FIELD_U8(a1, 20);
    if ( (result & 0xF0) == 0 )
    {
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
  }
  return result;
}
