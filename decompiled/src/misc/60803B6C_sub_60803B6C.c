/* sub_60803B6C
 * address: 0x60803B6C   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60803B6C(_BYTE *a1, bool *a2)
{
  char v4; // r0
  int v5; // r7
  int v6; // r6
  int v7; // r7
  _BYTE *v8; // r0
  int v9; // r7
  _BYTE *v10; // r0
  int v11; // r7
  _BYTE *v12; // r0
  int v13; // r5
  _BYTE *v14; // r0
  int v15; // r5
  int v16; // r0
  int (**v18)(); // [sp+0h] [bp-20h] BYREF
  _BYTE *v19; // [sp+4h] [bp-1Ch]

  *a2 = 0;
  if ( a1[16] == 3 )
  {
    v18 = &off_60C27ECC;
    v19 = a1;
    if ( sub_60008D1C(
           ActorMgr__instance + 27168,
           (int (__fastcall ***)(_DWORD))&v18,
           *(_DWORD *)(ActorMgr__instance + 27172)) == *(_DWORD *)(ActorMgr__instance + 27180) )
      return -1;
    goto LABEL_3;
  }
  v6 = sub_6078A76C((_DWORD *)PlayerMgr_instance);
  if ( (v6 & 1) != 0 )
  {
    v7 = FIELD_U32(PlayerMgr_instance, 32);
    if ( v7 )
    {
      if ( a1[19] || sub_60797820(*(_DWORD **)(PlayerMgr_instance + 32)) )
      {
        v8 = *(_BYTE **)(v7 + 11472);
        v18 = *(int (***)())(v7 + 11468);
        v19 = v8;
        if ( ((int (__fastcall *)(int (***)(), _BYTE *))loc_6015ABF4)(&v18, a1) )
          goto LABEL_24;
      }
    }
  }
  if ( (v6 & 2) != 0 )
  {
    v9 = FIELD_U32(PlayerMgr_instance, 36);
    if ( v9 )
    {
      if ( a1[19] || sub_60797820(*(_DWORD **)(PlayerMgr_instance + 36)) )
      {
        v10 = *(_BYTE **)(v9 + 11472);
        v18 = *(int (***)())(v9 + 11468);
        v19 = v10;
        if ( ((int (__fastcall *)(int (***)(), _BYTE *))loc_6015ABF4)(&v18, a1) )
          goto LABEL_24;
      }
    }
  }
  if ( (v6 & 4) != 0 )
  {
    v11 = FIELD_U32(PlayerMgr_instance, 40);
    if ( v11 )
    {
      if ( a1[19] || sub_60797820(*(_DWORD **)(PlayerMgr_instance + 40)) )
      {
        v12 = *(_BYTE **)(v11 + 11472);
        v18 = *(int (***)())(v11 + 11468);
        v19 = v12;
        if ( ((int (__fastcall *)(int (***)(), _BYTE *))loc_6015ABF4)(&v18, a1) )
          goto LABEL_24;
      }
    }
  }
  v5 = -1;
  if ( (v6 & 8) != 0 )
  {
    v13 = FIELD_U32(PlayerMgr_instance, 44);
    if ( v13 )
    {
      if ( a1[19] || sub_60797820(*(_DWORD **)(PlayerMgr_instance + 44)) )
      {
        v14 = *(_BYTE **)(v13 + 11472);
        v18 = *(int (***)())(v13 + 11468);
        v19 = v14;
        if ( ((int (__fastcall *)(int (***)(), _BYTE *))loc_6015ABF4)(&v18, a1) )
        {
LABEL_24:
          v15 = (unsigned __int8)a1[16];
          if ( a1[16] )
          {
            v16 = sub_608FBB8C(v6);
            v5 = -1;
            if ( v15 == 1 )
            {
              if ( v16 != 1 )
                return v5;
            }
            else if ( v16 < 2 )
            {
              return v5;
            }
          }
LABEL_3:
          v4 = a1[18];
          *a2 = v4 != 0;
          return (unsigned __int8)a1[17];
        }
      }
    }
  }
  return v5;
}
