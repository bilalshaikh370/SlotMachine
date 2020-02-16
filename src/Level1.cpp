#include "Level1.h";
#include "Game.h";



Level1::Level1()
{
	start();
}

Level1::~Level1()
{
}

void Level1::draw()
{
	m_pMiddle->draw();
	m_pBanana1->draw();
	m_pCherry2->draw();
	m_pBell3->draw();
	

	

	
	
	m_pSpinButton->draw();
	m_pResetButton->draw();
	m_pBetButton->draw();
	m_pFiveDollarButton->draw();
	m_pTenButton->draw();
	m_pTwentyButton->draw();
	m_pFiftyButton->draw();
	m_pCurrentBet->draw();
	m_pPlayerMoney->draw();
}

void Level1::update()
{
	m_pSpinButton->setMousePosition(m_mousePosition);
	m_pSpinButton->ButtonClick();
	m_pResetButton->setMousePosition(m_mousePosition);
	m_pResetButton->ButtonClick();
	m_pBetButton->setMousePosition(m_mousePosition);
	m_pBetButton->ButtonClick();
	m_pFiveDollarButton->setMousePosition(m_mousePosition);
	m_pFiveDollarButton->ButtonClick();
	m_pTenButton->setMousePosition(m_mousePosition);
	m_pTenButton->ButtonClick();
	m_pTwentyButton->setMousePosition(m_mousePosition);
	m_pTwentyButton->ButtonClick();
	m_pFiftyButton->setMousePosition(m_mousePosition);
	m_pFiftyButton->ButtonClick();
}

void Level1::clean()
{
}

void Level1::handleEvents()
{
	int wheel = 0;

	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;
		case SDL_TEXTINPUT:
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			case SDLK_1:
				TheGame::Instance()->changeSceneState(SceneState::START_SCENE);
				break;
			case SDLK_2:
				TheGame::Instance()->changeSceneState(SceneState::END_SCENE);
				break;
			case SDLK_BACKQUOTE:
				break;
			case SDLK_f:
				//std::cout << "**** NEW PATH ****" << std::endl;
				break;
				/************************************************************************/
			case SDLK_w:
				//m_pTarget.setVelocity(glm::vec2(m_pTarget.getVelocity().x, -1.0f));
				break;
			case SDLK_s:
				//m_pTarget.setVelocity(glm::vec2(m_pTarget.getVelocity().x, 1.0f));
				break;
			case SDLK_a:
				//m_pTarget.setVelocity(glm::vec2(-1.0f, m_pTarget.getVelocity().y));
				break;
			case SDLK_d:
				//m_pTarget.setVelocity(glm::vec2(1.0f, m_pTarget.getVelocity().y));
				break;
			}
			
			break;
		case SDL_KEYUP:
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				break;

			case SDLK_s:
				break;

			case SDLK_a:
				break;
			case SDLK_d:
				break;
			}
			break;
		default:
			break;
		}
	}

}

void Level1::start()
{
	m_pMiddle = new Middle();
	addChild(m_pMiddle);

	m_pBanana1 = new Banana();
	m_pBanana1->setPosition(glm::vec2(150, 300));
	addChild(m_pBanana1);

	m_pBanana2 = new Banana();
	m_pBanana2->setPosition(glm::vec2(400,300));
	addChild(m_pBanana2);

	m_pBanana3 = new Banana();
	m_pBanana3->setPosition(glm::vec2(650, 300));
	addChild(m_pBanana3);
	m_pCherry1 = new Cherry();
	m_pCherry1->setPosition(glm::vec2(150, 300));
	addChild(m_pCherry1);

	m_pCherry2 = new Cherry();
	m_pCherry2->setPosition(glm::vec2(400, 300));
	addChild(m_pCherry2);

	m_pCherry3 = new Cherry();
	m_pCherry3->setPosition(glm::vec2(650, 300));
	addChild(m_pCherry3);
	m_pGrapes1 = new Grapes();
	m_pGrapes1->setPosition(glm::vec2(150, 300));
	addChild(m_pGrapes1);

	m_pGrapes2 = new Grapes();
	m_pGrapes2->setPosition(glm::vec2(400, 300));
	addChild(m_pGrapes2);

	m_pGrapes3 = new Grapes();
	m_pGrapes3->setPosition(glm::vec2(650, 300));
	addChild(m_pGrapes3);
	m_pOrange1 = new Orange();
	m_pOrange1->setPosition(glm::vec2(150, 300));
	addChild(m_pOrange1);

	m_pOrange2 = new Orange();
	m_pOrange2->setPosition(glm::vec2(400, 300));
	addChild(m_pOrange2);

	m_pOrange3 = new Orange();
	m_pOrange3->setPosition(glm::vec2(650, 300));
	addChild(m_pOrange3);

	m_pBell1 = new Bell();
	m_pBell1->setPosition(glm::vec2(150, 300));
	addChild(m_pBell1);

	m_pBell2 = new Bell();
	m_pBell2->setPosition(glm::vec2(400, 300));
	addChild(m_pBell2);

	m_pBell3 = new Bell();
	m_pBell3->setPosition(glm::vec2(650, 300));
	addChild(m_pBell3);

	m_pSeven1 = new Seven();
	m_pSeven1->setPosition(glm::vec2(150, 300));
	addChild(m_pSeven1);

	m_pSeven2 = new Seven();
	m_pSeven2->setPosition(glm::vec2(400, 300));
	addChild(m_pSeven2);

	m_pSeven3 = new Seven();
	m_pSeven3->setPosition(glm::vec2(650, 300));
	addChild(m_pSeven3);

	m_pBar1 = new Bar();
	m_pBar1->setPosition(glm::vec2(150, 300));
	addChild(m_pBar1);

	m_pBar2 = new Bar();
	m_pBar2->setPosition(glm::vec2(400, 300));
	addChild(m_pBar2);

	m_pBar3 = new Bar();
	m_pBar3->setPosition(glm::vec2(650, 300));
	addChild(m_pBar3);

	m_pBlank1 = new Blank();
	m_pBlank1->setPosition(glm::vec2(150, 300));
	addChild(m_pBlank1);

	m_pBlank2 = new Blank();
	m_pBlank2->setPosition(glm::vec2(400, 300));
	addChild(m_pBlank2);

	m_pBlank3 = new Blank();
	m_pBlank3->setPosition(glm::vec2(650, 300));
	addChild(m_pBlank3);

	

	m_pSpinButton = new SpinButton();
	m_pResetButton = new ResetButton();
	m_pBetButton = new BetButton();
	m_pFiveDollarButton = new FiveDollarButton();
	m_pTenButton = new TenButton();
	m_pTwentyButton = new TwentyButton();
	m_pFiftyButton = new FiftyButton();

	SDL_Color White = { 255, 255, 255, 255 };
	m_pCurrentBet = new Label("Current Bet :0", "Consolas", 15, White, glm::vec2(80.0f, 40.0f));
	m_pCurrentBet->setParent(this);
	addChild(m_pCurrentBet);
	m_pPlayerMoney = new Label("Player Money:1000", "Consolas", 15, White, glm::vec2(80.0f, 25.0f));
	m_pPlayerMoney->setParent(this);
	addChild(m_pPlayerMoney);
}
