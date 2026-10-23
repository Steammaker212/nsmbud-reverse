/* sub_607A68CC
 * address: 0x607A68CC   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A68CC(_BYTE *a1)
{
  int v2; // r1
  _BYTE *v3; // r5
  int v4; // r0
  int result; // r0

  v2 = PlayerMgr_instance;
  FIELD_U16(PlayerMgr_instance, 66) &= ~(1 << a1[84]);
  a1[12012] = 0;
  v3 = a1 + 12012;
  if ( FIELD_U32(dword_60C99DD4, 764) == 1 && (v4 = sub_60777E74(dword_60CBFA90), v2 = PlayerMgr_instance, !v4) )
  {
    if ( !sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
    {
      if ( sub_603FBA24(dword_60C99DD4) <= 1 )
        *v3 = 1;
      sub_607FABF8(dword_60C9A1E0 + 708);
    }
  }
  else if ( !sub_608FBB8C(FIELD_U16(v2, 66)) )
  {
    *v3 = 1;
LABEL_10:
    sub_60816F60(dword_60CC6B68, 1);
    goto LABEL_11;
  }
  if ( *v3 )
    goto LABEL_10;
LABEL_11:
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 624))(a1, 1);
  Player_changeState((int)a1, (StateBase *)&dword_60CBF7F8, 0);
  sub_6079EA38(a1);
  sub_607B9C78(a1, 6);
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1208))(a1);
  result = sub_607957D4((int)a1, 3);
  *((_DWORD *)a1 + 2393) = 0;
  return result;
}
