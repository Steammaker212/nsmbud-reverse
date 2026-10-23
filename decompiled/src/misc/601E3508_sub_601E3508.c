/* sub_601E3508
 * address: 0x601E3508   size: 4476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *__fastcall sub_601E3508(int a1, int a2)
{
  const char *result; // r0
  unsigned int v3; // r0
  unsigned int v4; // r0
  unsigned int v5; // r0
  unsigned int v6; // r0
  unsigned int v7; // r0
  unsigned int v8; // r0

  result = "SE_PLY_CS_JUMP";
  switch ( a2 )
  {
    case 1:
      return result;
    case 2:
      result = "SE_PLY_CS_JUMP_S";
      break;
    case 3:
      result = "SE_PLY_CS_JUMP_SS";
      break;
    case 4:
      result = "SE_SYS_COURSE_IN";
      break;
    case 5:
      result = "SE_PLY_CS_ENEMY_CONTACT";
      break;
    case 6:
      result = "SE_PLY_CS_PLAYER_BYE";
      break;
    case 7:
      result = "SE_PLY_CS_DOKAN_IN_OUT";
      break;
    case 8:
      result = "SE_PLY_CS_LAND_POINT";
      break;
    case 9:
      result = "SE_PLY_CS_MOVE_IVY";
      break;
    case 10:
      result = "SE_PLY_CS_CHANGE_SMALL";
      break;
    case 11:
      result = "SE_PLY_CS_SLIP";
      break;
    case 12:
      result = "SE_BGM_CS_STAR";
      break;
    case 13:
      result = "SE_PLY_CS_LAND_PNGN";
      break;
    case 16:
      result = "SE_PLY_FOOTNOTE_CS_DIRT";
      break;
    case 17:
      result = "SE_PLY_FOOTNOTE_CS_WOOD";
      break;
    case 18:
      result = "SE_PLY_FOOTNOTE_CS_ROCK";
      break;
    case 19:
      result = "SE_PLY_FOOTNOTE_CS_SAND";
      break;
    case 20:
      result = "SE_PLY_FOOTNOTE_CS_SAND";
      break;
    case 21:
      result = "SE_PLY_FOOTNOTE_CS_SNOW";
      break;
    case 22:
      result = "SE_PLY_FOOTNOTE_CS_WATER";
      break;
    case 23:
      result = "SE_PLY_FOOTNOTE_CS_CLOUD";
      break;
    case 24:
      result = "SE_PLY_FOOTNOTE_CS_PNGN";
      break;
    case 25:
      result = "SE_PLY_FOOTNOTE_CS_HASHIGO_NAWA";
      break;
    case 26:
      result = "SE_PLY_FOOTNOTE_CS_HASHIGO_FE";
      break;
    case 27:
      result = "SE_PLY_FOOTNOTE_CS_ROCK_CLIMB";
      break;
    case 28:
      result = "SE_EMY_CS_CMN_SHA_FN";
      break;
    case 31:
      result = "SE_OBJ_GEN_LOAD";
      break;
    case 32:
      result = "SE_OBJ_GEN_NEW_COURSE";
      break;
    case 33:
      result = "SE_OBJ_CS_DOOR_OPEN";
      break;
    case 34:
      result = "SE_OBJ_CS_DOOR_OPEN_STRONG";
      break;
    case 35:
      result = "SE_OBJ_CS_DOOR_CLOSE";
      break;
    case 36:
      result = "SE_OBJ_CS_HATA";
      break;
    case 37:
      result = "SE_OBJ_CS_PROPELLER";
      break;
    case 38:
      result = "SE_OBJ_CS_LEM_PROPELLER";
      break;
    case 39:
      result = "SE_OBJ_CS_MOR_PROPELLER";
      break;
    case 40:
      result = "SE_OBJ_CS_LAR_PROPELLER";
      break;
    case 41:
      result = "SE_OBJ_CS_WEN_PROPELLER";
      break;
    case 42:
      result = "SE_OBJ_CS_IGG_PROPELLER";
      break;
    case 43:
      result = "SE_OBJ_CS_ROY_PROPELLER";
      break;
    case 44:
      result = "SE_OBJ_CS_LUD_PROPELLER";
      break;
    case 45:
      result = "SE_OBJ_CS_PROPELLER_KOOPA";
      break;
    case 46:
      result = "SE_OBJ_CS_PRPL_KP_DEMO_INTRO";
      break;
    case 47:
      result = "SE_OBJ_CS_PRPL_KP_DEMO_CASTLE1";
      break;
    case 48:
      result = "SE_OBJ_CS_PRPL_KP_DEMO_CASTLE2";
      break;
    case 49:
      result = "SE_OBJ_CS_PRPL_KP_DEMO_CASTLE3";
      break;
    case 50:
      result = "SE_OBJ_CS_KINOHOUSE_APP";
      break;
    case 51:
      result = "SE_OBJ_CS_KINOHOUSE_DISAPP";
      break;
    case 52:
      result = "SE_OBJ_CS_DOOR_OPEN_WOOD";
      break;
    case 53:
      result = "SE_OBJ_CS_DOOR_OPEN_STRONG_WOOD";
      break;
    case 54:
      result = "SE_OBJ_CS_DOOR_CLOSE_WOOD";
      break;
    case 55:
      result = "SE_OBJ_CS_SWITCH";
      break;
    case 56:
      result = "SE_OBJ_CS_BLOCK_GEN";
      break;
    case 57:
      result = "SE_OBJ_CS_BLOCK_DISAPP";
      break;
    case 58:
      result = "SE_OBJ_CS_DOKAN";
      break;
    case 59:
      result = "SE_VOC_ITEM_KO_INFO";
      break;
    case 60:
      result = "SE_OBJ_CS_KINOPIO_HERE";
      break;
    case 61:
      result = "SE_VOC_ITEM_KO_HELP_ME_HERE";
      break;
    case 62:
      result = "SE_OBJ_CS_K_CASTLE_BRIDGE_APP";
      break;
    case 63:
      result = "SE_OBJ_CS_K_CASTLE_BRIDGE_APP_F";
      break;
    case 64:
      result = "SE_OBJ_CS_K_CASTLE_RUMBLE";
      break;
    case 65:
      result = "SE_OBJ_CS_MOUNTAIN_DISAPP";
      break;
    case 66:
      result = "SE_OBJ_GEN_LODA_YOUGAN";
      break;
    case 67:
      result = "SE_OBJ_GEN_LODA_TSUTA";
      break;
    case 68:
      result = "SE_OBJ_CS_WARP_CANNON_APP";
      break;
    case 69:
      result = "SE_OBJ_CS_WARP_CANNON_SHOT";
      break;
    case 70:
      result = "SE_AMB_CS_WATERPILLAR_SIGN";
      break;
    case 71:
      result = "SE_AMB_CS_WATERPILLAR_SPOUT";
      break;
    case 72:
      result = "SE_OBJ_CS_CMN_FLAG_STAND";
      break;
    case 73:
      result = "SE_VOC_CS_OP_LEM_REPLY";
      break;
    case 74:
      result = "SE_VOC_CS_OP_MOR_REPLY";
      break;
    case 75:
      result = "SE_VOC_CS_OP_LAR_REPLY";
      break;
    case 76:
      result = "SE_VOC_CS_OP_IGY_REPLY";
      break;
    case 77:
      result = "SE_VOC_CS_OP_WEN_REPLY";
      break;
    case 78:
      result = "SE_VOC_CS_OP_ROY_REPLY";
      break;
    case 79:
      result = "SE_VOC_CS_OP_LUD_REPLY";
      break;
    case 80:
      result = "SE_OBJ_CS_CMN_SHIP_ATTACKED";
      break;
    case 81:
      result = "SE_OBJ_CS_CMN_SHIP_ATTACKED_LAST";
      break;
    case 82:
      result = "SE_OBJ_CS_CMN_SHIP_SPEED_DOWN_LV";
      break;
    case 83:
      result = "SE_OBJ_CS_CMN_SHIP_TSUIRAKU";
      break;
    case 84:
      result = "SE_OBJ_CS_W3_SHIP_TOP_ORERU";
      break;
    case 85:
      result = "SE_OBJ_CS_W3_SHIP_MAST_DOWN";
      break;
    case 86:
      result = "SE_OBJ_CS_CMN_CLOWN_PRPL_LV";
      break;
    case 87:
      result = "SE_OBJ_CS_W8_CLOWN_COURSE_IN";
      break;
    case 88:
      result = "SE_AMB_CS_EARTHQUAKE_LV";
      break;
    case 89:
      result = "SE_OBJ_CS_SHIP_A_FIRST_UPDOWN";
      break;
    case 90:
      result = "SE_OBJ_CS_SHIP_B_FIRST_UPDOWN";
      break;
    case 91:
      result = "SE_OBJ_CS_KPHAND_APPEAR";
      break;
    case 92:
      result = "SE_OBJ_CS_KPHAND_FINGER_MOVE";
      break;
    case 93:
      result = "SE_OBJ_CS_SHIP_A_LAST_ESCAPE";
      break;
    case 94:
      result = "SE_OBJ_CS_SHIP_B_LAST_ESCAPE";
      break;
    case 95:
      result = "SE_OBJ_CS_SHIP_B_LAST_EXPLOSION_S";
      break;
    case 96:
      result = "SE_OBJ_CS_SHIP_B_LAST_FALL";
      break;
    case 97:
      result = "SE_OBJ_CS_SHIP_B_LAST_FALLDOWN";
      break;
    case 98:
      result = "SE_OBJ_CS_SHIP_B_CLOWN_APPEAR";
      break;
    case 99:
      result = "SE_OBJ_CS_SHIP_B_CLOWN_DISAPPEAR";
      break;
    case 100:
      result = "SE_OBJ_CS_SHIP_B_CLOWN_KEMURI_IN";
      break;
    case 101:
      result = "SE_OBJ_CS_W8_CLOWN_MOVE_LV";
      break;
    case 102:
      result = "SE_OBJ_CS_DARK_FLAG_HIKKOMU";
      break;
    case 103:
      result = "SE_OBJ_CS_P_SHIRO_FLAG_STAND";
      break;
    case 104:
      result = "SE_OBJ_CS_DARK_CLOUD_APPEAR";
      break;
    case 105:
      result = "SE_OBJ_CS_DARK_CLOUD_BECOME_BIG";
      break;
    case 106:
      result = "SE_OBJ_CS_DARK_CLOUD_DISAPPEAR";
      break;
    case 107:
      result = "SE_OBJ_CS_W9_STAR_APPEAR";
      break;
    case 108:
      result = "SE_OBJ_CS_W9_NEW_COURSE_OPEN";
      break;
    case 109:
      result = "SE_OBJ_CS_W9_STAR_TSUUKA";
      break;
    case 110:
      result = "SE_OBJ_CS_GRAVE_STONE_OPEN";
      break;
    case 111:
      result = "SE_OBJ_CS_GRAVE_STONE_CLOSE";
      break;
    case 112:
      result = "SE_OBJ_CS_AMIDA_RAIMBOW_APPEAR";
      break;
    case 113:
      result = "SE_OBJ_CS_AMIDA_RAIMBOW_DISAPPEAR";
      break;
    case 114:
      result = "SE_PLY_CS_CMN_MA_ITEM_SHIMAU";
      break;
    case 115:
      result = "SE_PLY_CS_CH_YS_LAND";
      break;
    case 116:
      result = "SE_VOC_CS_CMN_CH_YS";
      break;
    case 117:
      result = "SE_VOC_CS_RED_KO_APPEAR";
      break;
    case 118:
      result = "SE_VOC_CS_RED_KO_AWAWA";
      break;
    case 119:
      result = "SE_VOC_CS_RED_KO_DOKAN_SHOT";
      break;
    case 120:
      result = "SE_VOC_CS_CMN_SHA_APPEAR";
      break;
    case 121:
      result = "SE_VOC_CS_CMN_SHA_WALKING_LV";
      break;
    case 122:
      result = "SE_VOC_CS_CMN_SHA_COURSE_IN";
      break;
    case 123:
      result = "SE_VOC_CS_CMN_SHA_LAUGH";
      break;
    case 124:
      result = "SE_VOC_CS_SHA_ESCAPE";
      break;
    case 125:
      result = "SE_VOC_CS_SHA_DAMAGED";
      break;
    case 126:
      result = "SE_VOC_JR_CS_FALL_OUT_CASTLE";
      break;
    case 127:
      result = "SE_BOSS_CS_JR_LAND";
      break;
    case 128:
      result = "SE_BOSS_CS_JR_FOOT";
      break;
    case 129:
      result = "SE_BOSS_CS_JR_JUMP_S";
      break;
    case 130:
      result = "SE_VOC_JR_CS_SURPRISE";
      break;
    case 131:
      result = "SE_BOSS_CS_JR_JUMP_L";
      break;
    case 132:
      result = "SE_VOC_JR_CS_JUMP";
      break;
    case 135:
      result = "SE_BOSS_CS_JUMP";
      break;
    case 136:
      result = "SE_BOSS_CS_LAND_SHIRO";
      break;
    case 137:
      result = "SE_BOSS_CS_INTO_SHIRO";
      break;
    case 138:
      result = "SE_BOSS_CS_KAMECK_FLY";
      break;
    case 139:
      result = "SE_BOSS_CS_KAMECK_FLY_SHIP";
      break;
    case 140:
      result = "SE_BOSS_CS_KAMECK_FLY_K_CASTLE";
      break;
    case 141:
      result = "SE_EMY_CS_CMN_COURSE_IN";
      break;
    case 142:
      result = "SE_EMY_CS_CMN_COURSE_OUT";
      break;
    case 143:
      result = "SE_EMY_CS_CMN_BUN_FOOT";
      break;
    case 144:
      result = "SE_EMY_CS_CMN_PUNCHED";
      break;
    case 145:
      result = "SE_EMY_CS_CMN_DISAPPEAR";
      break;
    case 146:
      result = "SE_BOSS_CS_W1_KMC_FLYING";
      break;
    case 147:
      result = "SE_BOSS_CS_DARK_KMC_FLYING_LV";
      break;
    case 148:
      result = "SE_EMY_CS_W1_BUN_FOOT";
      break;
    case 149:
      result = "SE_EMY_CS_DARK_KMC_MAGIC";
      break;
    case 150:
      v3 = FIELD_U32(dword_60CC6D78, 412);
      if ( v3 >= 8 )
        result = "SE_DUMMY";
      else
        result = off_60BD6D80[v3];
      break;
    case 151:
      v4 = FIELD_U32(dword_60CC6D78, 412);
      if ( v4 >= 8 )
        result = "SE_DUMMY";
      else
        result = off_60BD6DA0[v4];
      break;
    case 152:
      v5 = FIELD_U32(dword_60CC6D78, 412);
      if ( v5 >= 8 )
        result = "SE_DUMMY";
      else
        result = off_60BD6DC0[v5];
      break;
    case 153:
      v6 = FIELD_U32(dword_60CC6D78, 412);
      if ( v6 >= 8 )
        result = "SE_DUMMY";
      else
        result = off_60BD6DE0[v6];
      break;
    case 154:
      v7 = FIELD_U32(dword_60CC6D78, 412);
      if ( v7 >= 8 )
        result = "SE_DUMMY";
      else
        result = off_60BD6E00[v7];
      break;
    case 155:
      v8 = FIELD_U32(dword_60CC6D78, 412);
      if ( v8 >= 8 )
        result = "SE_DUMMY";
      else
        result = off_60BD6E20[v8];
      break;
    case 156:
      result = "SE_VOC_CS_CMN_BUN_COURSE_IN";
      break;
    case 157:
      result = "SE_VOC_CS_CMN_BUN_MISS";
      break;
    case 158:
      result = "SE_VOC_CS_CMN_BUN_DAMAGED";
      break;
    case 159:
      result = "SE_VOC_CS_W6_BKK_DAMAGED";
      break;
    case 160:
      result = "SE_VOC_CS_W7_KMC_DAMAGED";
      break;
    case 161:
      result = "SE_VOC_CS_W7_KMC_COURSE_IN";
      break;
    case 162:
      result = "SE_VOC_CS_W7_KMC_MISS";
      break;
    case 163:
      result = "SE_VOC_CS_W8_JR_COURSE_IN";
      break;
    case 164:
      result = "SE_VOC_CS_CMN_KP_LAUGH";
      break;
    case 165:
      result = "SE_VOC_CS_SHIP_B_JR_AGITATE";
      break;
    case 166:
      result = "SE_VOC_CS_SHIP_B_JR_PUNCH";
      break;
    case 167:
      result = "SE_VOC_CS_OP_KP_GOUREI";
      break;
    case 168:
      result = "SE_VOC_CS_W1_KMC_LAUGH";
      break;
    case 169:
      result = "SE_VOC_CS_CMN_BUN_IKAKU";
      break;
    case 170:
      result = "SE_VOC_CS_W7_KMC_IKAKU";
      break;
    case 171:
      if ( FIELD_U8(dword_60C99DEC, 36) && !FIELD_U32(dword_60C99DEC, 48) )
      {
        result = "SE_VOC_CS_W8_PCH_HELP_MA";
      }
      else if ( FIELD_U8(dword_60C99DEC, 108) && !FIELD_U32(dword_60C99DEC, 120) )
      {
        result = "SE_VOC_CS_W8_PCH_HELP_MA";
      }
      else if ( FIELD_U8(dword_60C99DEC, 180) && !FIELD_U32(dword_60C99DEC, 192) )
      {
        result = "SE_VOC_CS_W8_PCH_HELP_MA";
      }
      else if ( FIELD_U8(dword_60C99DEC, 252) && !FIELD_U32(dword_60C99DEC, 264) )
      {
        result = "SE_VOC_CS_W8_PCH_HELP_MA";
      }
      else if ( FIELD_U8(dword_60C99DEC, 36) && FIELD_U32(dword_60C99DEC, 48) == 1 )
      {
        result = "SE_VOC_CS_W8_PCH_HELP_LU";
      }
      else if ( FIELD_U8(dword_60C99DEC, 108) && FIELD_U32(dword_60C99DEC, 120) == 1 )
      {
        result = "SE_VOC_CS_W8_PCH_HELP_LU";
      }
      else if ( FIELD_U8(dword_60C99DEC, 180) && FIELD_U32(dword_60C99DEC, 192) == 1 )
      {
        result = "SE_VOC_CS_W8_PCH_HELP_LU";
      }
      else if ( FIELD_U8(dword_60C99DEC, 252) && FIELD_U32(dword_60C99DEC, 264) == 1 )
      {
        result = "SE_VOC_CS_W8_PCH_HELP_LU";
      }
      else
      {
        result = "SE_VOC_CS_W8_PCH_HELP_PLAYER";
      }
      break;
    case 172:
      result = "SE_VOC_CS_CMN_JR_CHOUHATSU";
      break;
    case 175:
      result = "SE_EMY_CS_ENEMY_BYE";
      break;
    case 176:
      result = "SE_EMY_CS_MOVE_W1_KURIBO";
      break;
    case 177:
      result = "SE_EMY_CS_MOVE_W2_SANDHALL";
      break;
    case 178:
      result = "SE_EMY_CS_MOVE_W3_ICEBROS";
      break;
    case 179:
      result = "SE_EMY_CS_MOVE_W4_PUKU";
      break;
    case 180:
      result = "SE_EMY_CS_MOVE_W5_PAKKUN";
      break;
    case 181:
      result = "SE_EMY_CS_MOVE_W6_KILLER";
      break;
    case 182:
      result = "SE_EMY_CS_MOVE_W7_JUGEM";
      break;
    case 183:
      result = "SE_EMY_CS_MOVE_W8_BUBBLE_APP";
      break;
    case 184:
      result = "SE_EMY_CS_MOVE_W8_BUBBLE_DISAPP";
      break;
    case 185:
      result = "SE_EMY_CS_TERESA_BRING_IT";
      break;
    case 186:
      result = "SE_EMY_CS_TERESA_BEAT_YOU";
      break;
    case 187:
      result = "SE_EMY_CS_KILLER";
      break;
    case 188:
      result = "SE_PLY_CS_GOTO_ENEMY_COURSE";
      break;
    case 189:
      result = "SE_PLY_CSDEMO_KURI_APP";
      break;
    case 190:
      result = "SE_PLY_CSDEMO_KURI_LOOK";
      break;
    case 191:
      result = "SE_PLY_CSDEMO_KURI_TAKEAWAY";
      break;
    case 192:
      result = "SE_PLY_CSDEMO_KURI_COURSE_IN";
      break;
    case 193:
      result = "SE_EMY_CS_PAKKUN_MOUTH";
      break;
    case 194:
      result = "SE_EMY_CS_LIFT_LINE_ACTIVE";
      break;
    case 195:
      result = "SE_EMY_CS_LIFT_LINE_MOVE";
      break;
    case 196:
      result = "SE_EMY_CS_LIFT_LINE_FLY";
      break;
    case 197:
      result = "SE_EMY_CS_LIFT_LINE_BARK";
      break;
    case 198:
      result = "SE_OBJ_CS_CMN_APPEAR";
      break;
    case 199:
      result = "SE_EMY_CS_W7_APPEAR";
      break;
    case 200:
      result = "SE_EMY_CS_KURIBO_MOVE_LV";
      break;
    case 201:
      result = "SE_EMY_CS_FIREBROS_MOVE_LV";
      break;
    case 202:
      result = "SE_EMY_CS_PENGUIN_SLIDE_LV";
      break;
    case 203:
      result = "SE_EMY_CS_TERESA_NOTICE";
      break;
    case 204:
      result = "SE_EMY_CS_TERESA_SHUFFLE_FLY_LV";
      break;
    case 205:
      result = "SE_EMY_CS_TERESA_HIDE";
      break;
    case 206:
      result = "SE_EMY_CS_TERESA_ENCOUNT";
      break;
    case 207:
      result = "SE_EMY_CS_CMN_SHA_JUMP";
      break;
    case 208:
      result = "SE_EMY_CS_CMN_SHA_LAND";
      break;
    case 209:
      result = "SE_EMY_CS_SHA_FIGHTING";
      break;
    case 210:
      result = "SE_EMY_CS_CMN_SHA_KYORO";
      break;
    case 211:
      result = "SE_EMY_CS_CMN_SHA_COURSE_IN";
      break;
    case 214:
      result = "SE_SYS_MAP_VIEW_MODE";
      break;
    case 215:
      result = "SE_SYS_MAP_VIEW_QUIT";
      break;
    case 216:
      result = "SE_SYS_MAP_VIEW_ZOOM_IN_LV";
      break;
    case 217:
      result = "SE_SYS_MAP_VIEW_ZOOM_OUT_LV";
      break;
    case 218:
      result = "SE_SYS_MAP_VIEW_MOVING_KEY_LV";
      break;
    case 219:
      result = "SE_SYS_MAP_RETURN_POINT";
      break;
    case 220:
      result = "SE_SYS_MAP_TOUCH_ON";
      break;
    case 221:
      result = "SE_SYS_MAP_TOUCH_OFF";
      break;
    case 222:
      result = "SE_SYS_MAP_TOUCH_SCROLL_LV";
      break;
    case 223:
      result = "SE_OBJ_CS_IBARA";
      break;
    case 224:
      result = "SE_SYS_KINO_BALLOON";
      break;
    case 225:
      result = "SE_SYS_KINO_BALLOON_DISAPP";
      break;
    case 226:
      result = "SE_VOC_ITEM_KO_HELP_ME";
      break;
    case 227:
      result = "SE_VOC_CS_KOOPA_LAUGH";
      break;
    case 228:
      result = "SE_OBJ_CS_SWITCH_BLOCK";
      break;
    case 229:
      result = "SE_EMY_CS_CMN_SHA_ICON_APPEAR";
      break;
    case 230:
      if ( FIELD_U8(dword_60C99DEC, 36) && !FIELD_U32(dword_60C99DEC, 48) )
      {
        result = "SE_VOC_CS_DARK_PCH_SURPRISE_MA";
      }
      else if ( FIELD_U8(dword_60C99DEC, 108) && !FIELD_U32(dword_60C99DEC, 120) )
      {
        result = "SE_VOC_CS_DARK_PCH_SURPRISE_MA";
      }
      else if ( FIELD_U8(dword_60C99DEC, 180) && !FIELD_U32(dword_60C99DEC, 192) )
      {
        result = "SE_VOC_CS_DARK_PCH_SURPRISE_MA";
      }
      else if ( FIELD_U8(dword_60C99DEC, 252) && !FIELD_U32(dword_60C99DEC, 264) )
      {
        result = "SE_VOC_CS_DARK_PCH_SURPRISE_MA";
      }
      else if ( FIELD_U8(dword_60C99DEC, 36) && FIELD_U32(dword_60C99DEC, 48) == 1 )
      {
        result = "SE_VOC_CS_DARK_PCH_SURPRISE_LU";
      }
      else if ( FIELD_U8(dword_60C99DEC, 108) && FIELD_U32(dword_60C99DEC, 120) == 1 )
      {
        result = "SE_VOC_CS_DARK_PCH_SURPRISE_LU";
      }
      else if ( FIELD_U8(dword_60C99DEC, 180) && FIELD_U32(dword_60C99DEC, 192) == 1 )
      {
        result = "SE_VOC_CS_DARK_PCH_SURPRISE_LU";
      }
      else if ( FIELD_U8(dword_60C99DEC, 252) && FIELD_U32(dword_60C99DEC, 264) == 1 )
      {
        result = "SE_VOC_CS_DARK_PCH_SURPRISE_LU";
      }
      else
      {
        result = "SE_VOC_CS_DARK_PCH_SURPRISE_PLAYER";
      }
      break;
    case 233:
      result = "STRM_BGM_STAR_COIN_CMPLT_WORLD";
      break;
    case 234:
      result = "STRM_BGM_STAR_COIN_CMPLT_ALL";
      break;
    case 235:
      result = "STRM_BGM_STORY_CREAR";
      break;
    case 236:
      result = "STRM_BGM_ALL_CMPLT_5STARS";
      break;
    default:
      result = "SE_DUMMY";
      break;
  }
  return result;
}
