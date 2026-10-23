/* SE_SYS_FS_ref
 * address: 0x6053FD5C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_FS_ref(int a1)
{
  _BYTE *v2; // r5
  _BYTE *v3; // r5
  int result; // r0

  v2 = (_BYTE *)(a1 + 34732);
  if ( !FIELD_U8(a1, 34732) )
  {
    if ( *(_BYTE *)(FIELD_U32(a1, 31784) + 65) )
    {
      sub_60478680((int)"SE_SYS_FS_FINISHED", 15);
      *v2 = 1;
    }
    sub_6080840C((_DWORD *)SoundSystem_instance, (int)"SE_SYS_FS_PROCESSING", 1, 0, 0);
  }
  v3 = (_BYTE *)(a1 + 34727);
  if ( !FIELD_U8(a1, 34727) && (*(_BYTE *)(sub_6047482C(a1 + 28128, 0) + 51) & 1) != 0 )
    *v3 = 1;
  result = 1;
  if ( FIELD_U8(a1, 34729) )
  {
    result = 0;
    if ( FIELD_U32(dword_60CC6E04, 24) != 2 )
    {
      FIELD_U8(a1, 34729) = 0;
      result = 1;
    }
  }
  if ( *v3 && result == 1 )
  {
    result = FIELD_U32(dword_60CC6E04, 32);
    if ( !result )
      return (int)StateMgr__changeState((StateMgr *)(a1 + 28108), (StateBase *)&dword_60CABA9C);
  }
  return result;
}
