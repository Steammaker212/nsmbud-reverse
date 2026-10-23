/* SE_SYS_CE_ref_3_helper_6EAE84
 * address: 0x606EAE84   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_ref_3_helper_6EAE84(_DWORD *a1)
{
  unsigned int v2; // r1
  _BYTE *v3; // r6
  int i; // r7
  int v5; // r0
  _WORD *v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0
  unsigned int v11; // [sp+0h] [bp-28h]

  v2 = FIELD_U8(LevelInfo_instance, 17);
  if ( v2 > 0x39 )
    v2 = 0;
  v11 = v2;
  v3 = (_BYTE *)(sub_603F7EE4(dword_60C99DC8, v2) + 1);
  for ( i = 64; i != 364; ++i )
  {
    if ( (unsigned __int8)*(v3 - 1) != 255 )
    {
      *(v3 - 1) = -1;
      *v3 = -1;
      v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[i]);
      if ( v5 )
        FIELD_U8(v5, 19) = 1;
      a1[i] = 0;
    }
    v3 += 8;
  }
  a1[25] = 0;
  v6 = (_WORD *)sub_603F7EE4(dword_60C99DC8, v11);
  if ( *((unsigned __int8 *)v6 + 2400) != 255 )
  {
    v6[1200] = -1;
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[364]);
    if ( v7 )
      FIELD_U8(v7, 19) = 1;
    a1[364] = 0;
  }
  if ( *((unsigned __int8 *)v6 + 2412) != 255 )
  {
    v6[1206] = -1;
    v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[365]);
    if ( v8 )
      FIELD_U8(v8, 19) = 1;
    a1[365] = 0;
  }
  if ( *((unsigned __int8 *)v6 + 2424) != 255 )
  {
    v6[1212] = -1;
    v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[366]);
    if ( v9 )
      FIELD_U8(v9, 19) = 1;
    a1[366] = 0;
  }
  a1[26] = 0;
  return 0;
}
