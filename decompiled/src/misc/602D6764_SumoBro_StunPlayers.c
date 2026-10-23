/* SumoBro_StunPlayers
 * address: 0x602D6764   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SumoBro_StunPlayers(unsigned __int8 *this)
{
  _BYTE *v2; // r4
  _DWORD *v3; // r8
  unsigned __int8 *player0; // r5
  unsigned __int8 *player1; // r5
  unsigned __int8 *player2; // r5
  signed int result; // r0
  unsigned __int8 *player3; // r5

  *(this + 6680) = 0;
  v2 = this + 6680;
  v3 = this + 6676;
  player0 = *(unsigned __int8 **)(PlayerMgr_instance + 0x20);
  if ( player0
    && (*(_BYTE *)((*(int (__fastcall **)(_DWORD))(*(_DWORD *)player0 + 80))(FIELD_U32(PlayerMgr_instance, 0x20))
                 + 0x8B0)
      & 1) != 0
    && player0[532] == *(this + 532) )
  {
    Player_stun((int)player0, 0);
    *v3 = 120;
    *v2 = 1;
  }
  *(this + 6681) = 0;
  player1 = *(unsigned __int8 **)(PlayerMgr_instance + 0x24);
  if ( player1
    && (*(_BYTE *)((*(int (__fastcall **)(_DWORD))(*(_DWORD *)player1 + 80))(FIELD_U32(PlayerMgr_instance, 0x24))
                 + 2224)
      & 1) != 0
    && player1[532] == *(this + 532) )
  {
    Player_stun((int)player1, 0);
    *v3 = 120;
    *(this + 6681) = 1;
  }
  *(this + 6682) = 0;
  player2 = *(unsigned __int8 **)(PlayerMgr_instance + 0x28);
  if ( player2
    && (*(_BYTE *)((*(int (__fastcall **)(_DWORD))(*(_DWORD *)player2 + 80))(FIELD_U32(PlayerMgr_instance, 0x28))
                 + 2224)
      & 1) != 0
    && player2[532] == *(this + 532) )
  {
    Player_stun((int)player2, 0);
    *v3 = 120;
    *(this + 6682) = 1;
  }
  *(this + 6683) = 0;
  result = PlayerMgr_instance;
  player3 = *(unsigned __int8 **)(PlayerMgr_instance + 0x2C);
  if ( player3 )
  {
    result = *(unsigned __int8 *)((*(int (__fastcall **)(_DWORD))(*(_DWORD *)player3 + 80))(FIELD_U32(PlayerMgr_instance, 0x2C))
                                + 2224);
    if ( (result & 1) != 0 )
    {
      result = *(this + 532);
      if ( player3[532] == result )
      {
        Player_stun((int)player3, 0);
        *v3 = 120;
        *(this + 6683) = 1;
        return 1;
      }
    }
  }
  return result;
}
