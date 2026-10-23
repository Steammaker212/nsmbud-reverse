/* TalkWindow_KinopioTbox_00_ref
 * address: 0x60731664   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TalkWindow_KinopioTbox_00_ref(int a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r0
  int v5; // r1
  char v6; // r0

  if ( FIELD_S8(dword_60C9CF0C, 1404) < 0 || FIELD_U8(dword_60C9CF0C, 1406) )
    return 1;
  v3 = FIELD_U32(a1, 104);
  if ( v3 )
  {
    v4 = v3 - 1;
    FIELD_U32(a1, 104) = v4;
  }
  else
  {
    v4 = 0;
  }
  v5 = FIELD_S8(a1, 100);
  switch ( FIELD_U8(a1, 100) )
  {
    case 0:
      SE_MG__ref(a1, v5);
      goto LABEL_20;
    case 2:
      SE_MG_CMN_START_ref(a1, v5);
      goto LABEL_20;
    case 3:
      SE_MG_CMN_START_ref_2(a1, v5);
      goto LABEL_20;
    case 9:
      v5 = (unsigned __int8)v5;
      if ( (unsigned __int8)v5 != 9 )
        goto LABEL_20;
      v5 = FIELD_U8(a1, 101);
      if ( v5 == 1 )
      {
        if ( v4 )
          goto LABEL_20;
        if ( ((unsigned int)&dword_60CBDD34 & ~(1618155352 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD34) )
        {
          dword_60CBDD38 = (int)&sead__SafeStringBase__vtable;
          dword_60CBDD3C = (int)"TalkWindow_KinopioTbox_00";
          _cxa_guard_release(&dword_60CBDD34);
        }
        sub_6073131C(dword_60CBDBF8, (int)&dword_60CBDD38, 0);
        v6 = FIELD_U8(a1, 101) + 1;
      }
      else
      {
        if ( FIELD_U8(a1, 101) )
          goto LABEL_20;
        FIELD_U32(a1, 104) = 60;
        v6 = 1;
      }
      FIELD_U8(a1, 101) = v6;
LABEL_20:
      if ( FIELD_U8(a1, 113) )
        sub_60732F4C(a1, v5);
      return 1;
    default:
      goto LABEL_20;
  }
}
